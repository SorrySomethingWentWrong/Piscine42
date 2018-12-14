/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 19:07:13 by hkada             #+#    #+#             */
/*   Updated: 2018/09/02 16:17:16 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_cond(int x, int i_x, int y, int i_y)
{
	if (i_y == 1 || i_y == y || i_x == 1 || i_x == x)
		if ((i_y == 1 && i_x == 1) || (i_y == y && i_x == 1))
		{
			ft_putchar('A');
		}
		else if ((i_y == y && i_x == x) || (i_y == 1 && i_x == x))
			ft_putchar('C');
		else
			ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i_x;
	int i_y;

	i_x = 1;
	i_y = 1;
	while (i_y <= y)
	{
		i_x = 1;
		while (i_x <= x)
		{
			ft_cond(x, i_x, y, i_y);
			i_x++;
		}
		ft_putchar('\n');
		i_y++;
	}
}
