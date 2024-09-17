/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:00:53 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:55:40 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*int	main(void)
{
	char string[] = "Bene che oggi sia caldo";
	int	x;
	x = ft_strlen(string);
	printf("Len della string = %d", x);
	return(0);
}*/
