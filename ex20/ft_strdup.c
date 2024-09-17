/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:26:01 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 14:07:56 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	y;

	y = 0;
	while (src[y] != '\0')
	{
		y++;
	}
	return (y);
}

char	*ft_strdup(char *src)
{
	int		x;
	int		len;
	char	*copy;

	x = 0;
	len = ft_strlen(src);
	len = len + 1;
	copy = (char *) malloc(len * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (src[x] != '\0')
		{
			copy[x] = src[x];
			x++;
		}
		copy[x] = '\0';
	}
	return (copy);
}

void	ft_putchar(char c);

/*int	main(void)
{
	char	*copy;
	char	*src;
	int		w;

	src = "Tutto ok!!!";
	copy = ft_strdup(src);
	w = 0;
	while (copy[w] != '\0')
	{
		ft_putchar(copy[w]);
		w++;
	}
	ft_putchar('\n');
	free(copy);
	return (0);
}*/
