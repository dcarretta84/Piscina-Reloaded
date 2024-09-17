/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:17:50 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/16 13:19:15 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] != '\0') && (s2[x] != '\0') && (s1[x] == s2[x]))
		x++;
	return (s1[x] - s2[x]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*box;

	box = *s1;
	*s1 = *s2;
	*s2 = box;
}

void	ft_fix_params(int a, char **src)
{
	int	ok;
	int	diff;
	int	x;

	ok = 0;
	x = 1;
	while (!ok)
	{
		ok = 1;
		x = 1;
		while (x < (a - 1))
		{
			diff = ft_strcmp(src[x], src[x + 1]);
			if (diff > 0)
			{
				ft_swap(&src[x], &src[x + 1]);
				ok = 0;
			}
			x++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	ft_fix_params(argc, argv);
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
