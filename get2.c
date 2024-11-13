#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 999

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    return (c == '\0' ? (char *)str : NULL);
}

char *ft_strjoin(char *s1, const char *s2)
{
    size_t len1 = s1 ? strlen(s1) : 0;
    size_t len2 = s2 ? strlen(s2) : 0;
    char *res = malloc(len1 + len2 + 1);
    
    if (!res)
        return NULL;
    if (s1)
        strcpy(res, s1);
    if (s2)
        strcpy(res + len1, s2);
    
    free(s1); // Free s1 as we're finished with it
    return res;
}

char *get_line(char *buffer)
{
    size_t len = 0;
    while (buffer[len] && buffer[len] != '\n')
        len++;
    
    char *line = malloc(len + 1 + (buffer[len] == '\n' ? 1 : 0));
    if (!line)
        return NULL;
    
    strncpy(line, buffer, len);
    line[len] = '\0';
    
    if (buffer[len] == '\n')
        line[len++] = '\n';
    
    return line;
}

char *save_remainder(char *buffer)
{
    char *newline = ft_strchr(buffer, '\n');
    if (!newline)
        return NULL;

    char *remainder = strdup(newline + 1);
    return remainder;
}

char *get_next_line(int fd)
{
    static char *save = NULL;
    char buffer[BUFFER_SIZE + 1];
    char *line = NULL;
    ssize_t bytes_read;
    
    if (save)
    {
        line = get_line(save);
        char *new_save = save_remainder(save);
        free(save);
        save = new_save;
        if (ft_strchr(line, '\n'))
            return line;
    }
    
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';
        save = ft_strjoin(save, buffer);
        if (!save)
            return NULL;
        
        line = get_line(save);
        char *new_save = save_remainder(save);
        free(save);
        save = new_save;
        
        if (ft_strchr(line, '\n'))
            return line;
    }
    
    if (line && *line != '\0')
        return line;
    free(line);
    return NULL;
}

int main()
{
    int fd = open("file.txt", O_RDONLY);
    if (fd == -1) {
        perror("Failed to open file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("MAIN:%s", line);
        free(line);
    }

    close(fd);
    return 0;
}
