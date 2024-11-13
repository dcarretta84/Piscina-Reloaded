#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

char *ft_strchr(const char *str, int c)
{
	unsigned long 	x;
	unsigned long	y;

	y = 0;
	x = strlen(str);
	c = (unsigned char) c;
	while (y <= x)
	{
		if (str[y] == c)
			return ((char *) str + y);
		y++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	x;
	size_t	i;
	size_t	len_tot;
	char	*res;

	i = 0;
	x = 0;
    res = NULL;
	if (!s2)
		return (NULL);
    if (!s1)
    {
        res = (char *)malloc(strlen(s2) + 1 * sizeof(char));
        if(res == NULL)
            return(NULL);
        while (s2[x] != '\0')
        {
            res[x] = s2[x];
		    x++;
        }
        res[x] = '\0';
        return (res);
	}
	len_tot = strlen(s1) + strlen(s2);
	res = (char *)malloc((len_tot + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		res[i + x] = s2[x];
		x++;
	}
	res[i + x] = '\0';
	return (res);
}

char	*ft_strcut(char *s1, char *s2, int flag)
{
	size_t	x;
	size_t	i;
	size_t	len_tot;
	char	*res;
    char    *enter;

	i = 0;
	x = 0;
    res = NULL;
	if (!s2)
		return (NULL);
    if (!s1)
    {
        enter = strchr(s2, '\n');
        while (enter[++i] != '\0')
        res = (char *)malloc(i + 1 * sizeof(char));
        if(res == NULL)
            return(NULL);
        i = 0;
        while (enter[i] != '\0')
        {
            res[x] = enter[++i];
		    x++;
            
        }
        res[x] = '\0';
        return (res);
	}
   
	if (!flag)
    {
        while(s2[i] != '\n')  
            i++;
        len_tot = strlen(s1) + ++i;
	    res = (char *)malloc(len_tot + 1 * sizeof(char));
	    if (res == NULL)
		    return (NULL);
        i = 0;
	    while (s1[i] != '\0')
	    {
	    	res[i] = s1[i];
	    	i++;
	    }
	    while (s2[x] != '\n')
	    {
		    res[i + x] = s2[x];
		    x++;
	    }
        res[i + x] = '\n';
	    res[i + ++x] = '\0';
	    return (res);
    }
    else
    {
        x = i;
        while (s2[i] != '\0')
            i++;
        len_tot = strlen(s1) + (i - x);
	    res = (char *)malloc(len_tot * sizeof(char));
	    if (res == NULL)
		    return (NULL);
        i = 0;
	    while (s1[i] != '\0')
	    {
	    	res[i] = s1[i];
	    	i++;
	    }
	    while (s2[x] != '\n')
	    {
		    res[i + x] = s2[x];
		    x++;
	    }
	    res[i + x] = '\0';
	    return (res);

    }
}

char *get_next_line(int fd)
{
    static char *save = NULL; // Memorizza la parte letta e non ancora processata
    char *line = NULL;
    char buffer[BUFFER_SIZE + 1];  // Buffer per leggere dal file
    
    ssize_t bytes_read = 1;
    size_t i;
    int count = 0;

    while (bytes_read > 0)
    {
        i = 0;
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
           return (NULL);
        buffer[BUFFER_SIZE] = '\0';
        count++;
        if (bytes_read < BUFFER_SIZE)
        {
            bzero(&buffer[bytes_read], BUFFER_SIZE - bytes_read);
        }
        if (bytes_read > 0)
        {
            printf("%d) bytes read %zu | stringa -> %s\n",count, bytes_read, buffer);
            //Controllo se trovo il salto di linea
            if(strchr(&buffer[i], '\n') == NULL && line == NULL)
            {
                if (line == NULL && save == NULL) 
                {
                     line = ft_strjoin(line, &buffer[i]);
                     printf("line:\n%s\n\n", line);
                }
                else
                {
                    line = ft_strjoin(line, save);
                    line = ft_strjoin(line, &buffer[i]);
                    printf("line:\n%s\n\n", line);
                }
               
            }
            else
            {
                line = ft_strcut(line, &buffer[i], 0);
                printf("line:\n%s\n\n", line);
                save = NULL;
                save =(ft_strcut(save, &buffer[i], 1));
                printf("SAVE: %s", save);
                break;
            }
        }
    }
    return (line);
    
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
        printf("LINEA MAIN:\n%s\n\n", line);
        free(line);
    
    }

    close(fd);
    return 0;
}
