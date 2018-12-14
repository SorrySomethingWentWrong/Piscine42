/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:47:48 by tramet            #+#    #+#             */
/*   Updated: 2018/09/04 20:41:18 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	character;

	i = 0;
	character = '0';
	while (i < 10)
	{
		ft_putchar(character);
		character++;
		i++;
	}
}
