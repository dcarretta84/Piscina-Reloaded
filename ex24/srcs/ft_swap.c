/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:36:42 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:42:37 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	box;

	box = *a;
	*a = *b;
	*b = box;
}
/*int main(void)
{
	int a = 12;
	int b = 200;
	printf("a:%d\n", a);
	printf("b:%d\n", b);

	ft_swap(&a, &b);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	return(0);
}*/
