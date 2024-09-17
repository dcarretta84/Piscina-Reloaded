/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:59:40 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 11:43:29 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a = 10;
	int b = 5;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("Risultato: %d\nResto: %d\n", div, mod);
	return(0);
}*/
