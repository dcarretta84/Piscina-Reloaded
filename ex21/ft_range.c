/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:12:40 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 16:20:04 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	len_array;
	int	*array;

	x = 0;
	if (min >= max)
		return (NULL);
	len_array = max - min;
	array = (int *) malloc(len_array * sizeof(int));
	while (x < len_array)
	{
		array[x] = min + x;
		x++;
	}
	return (array);
}
/*int	main(void)
{
	int	min;
	int	max;
	int	*p;

	min = 10;
	max = 20;
	p = ft_range(min, max);
	free(p);
	return (0);
}*/
