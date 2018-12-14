/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:03:35 by tramet            #+#    #+#             */
/*   Updated: 2018/09/05 14:50:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	short save;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	save = nb % 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb /= 10;
		nb *= -1;
		save *= -1;
	}
	else
		nb /= 10;
	if (nb == 0)
	{
		ft_putchar('0' + save);
		return ;
	}
	else
	{
		ft_putnbr(nb);
		ft_putchar('0' + save);
	}
}
