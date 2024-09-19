/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:27:39 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/18 12:46:26 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	x;

	x = 0;
	while (x < length)
	{
		f(tab[x]);
		x++;
	}
}

/*int	main(void)
{
	int	array[] = {2, 4, 6, 87,89, 65, 99};
	ft_foreach(array, 7, &ft_putnbr);
	return(0);
}*/
