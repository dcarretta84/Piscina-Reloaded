/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:51:55 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 10:41:40 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_display_file(char *file)
{
	int		res;
	int		byte_read;
	char	buffer[BUFFER_SIZE];

	res = open(file, O_RDONLY);
	if (res == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	byte_read = read(res, buffer, BUFFER_SIZE);
	if (byte_read == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	else
	{
		write(1, buffer, byte_read);
	}
	close (res);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc >= 3)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
