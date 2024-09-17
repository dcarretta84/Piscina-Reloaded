/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:23:05 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:57:12 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	int	y;

	y = 0;
	while ((s1[y] == s2[y]) && (s1[y] != '\0'))
	{
		y++;
	}
	if (s1[y] != s2[y])
		return (s1[y] - s2[y]);
	else
		return (0);
}
/*int	main(void)
{
	char s1[] = "Ciao a tuttia";
	char s2[] = "Ciao a tutti";
	int x;
	x = ft_strcmp(s1, s2);
	printf("Differenza tra la comparazione: %d", x);
	return(0);
}*/
