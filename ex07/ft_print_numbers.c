/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:03:52 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/12 12:13:46 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c <= 57)
	{
		ft_putchar(c);
		c++;
	}
}
/*int main(void)
{
	ft_print_numbers();
	return(0);

}*/
