/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:59:21 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:51:22 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_sqrt(int nb)
{
	int	sq_root;

	sq_root = 1;
	while (sq_root * sq_root < nb)
		sq_root++;
	if (sq_root * sq_root == nb)
		return (sq_root);
	else
		return (0);
}
/*int	main(void)
{
	int x = 25;
	int y;
	y = ft_sqrt(x);
	printf("Number: %d\nRadice quadrata: %d\n", x, y);
	return(0);
}*/
