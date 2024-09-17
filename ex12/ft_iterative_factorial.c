/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:24:36 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:48:08 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	base;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	base = 1;
	while (base <= nb)
	{
		result = result * base;
		base++;
	}
	return (result);
}
/*int	main(void)
{
	int x = -120;
	int y;
	y = ft_iterative_factorial(x);
	printf("Il Fattoriale di %d: %d", x, y);
	return(0);
}*/
