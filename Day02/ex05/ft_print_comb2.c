/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 22:03:49 by tramet            #+#    #+#             */
/*   Updated: 2018/09/04 21:45:46 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	short index;

	index = 1;
	while (index <= 9899)
	{
		if (((index - index / 100 * 100)) < index / 100)
		{
			index = index / 100 + 1 + index / 100 * 100;
		}
		ft_putchar('0' + index / 1000);
		ft_putchar('0' + index % 1000 / 100);
		ft_putchar(' ');
		ft_putchar('0' + index % 100 / 10);
		ft_putchar('0' + index % 10);
		if (index <= 9799)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		index++;
	}
}
