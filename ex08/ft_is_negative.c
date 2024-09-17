/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:50:38 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/12 14:57:19 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
/*int main(void)
{
	int x = 0;
	int y = 1;
	int z = -221;
	ft_is_negative(x);
	ft_is_negative(y);
	ft_is_negative(z);
	return(0);
}*/
