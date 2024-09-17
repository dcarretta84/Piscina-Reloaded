/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:49:35 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 12:01:06 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	x;
	int	z;

	x = 1;
	z = 0;
	while (x < argc)
	{
		while (argv[x][z] != '\0')
		{
			ft_putchar(argv[x][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		x++;
	}
	return (0);
}
