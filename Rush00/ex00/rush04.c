/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 22:45:47 by tramet            #+#    #+#             */
/*   Updated: 2018/09/01 23:25:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_cond(int x, int i_x, int y, int i_y)
{
	if (!(x == 1 && i_y == y) && !(y == 1 && i_x == x))
	{
		ft_putchar('A');
	}
	else if (y == 1 && x == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('C');
	}
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
			if (i_y == 1 || i_y == y || i_x == 1 || i_x == x)
				if ((i_y == 1 && i_x == 1) || (i_y == y && i_x == x))
					ft_cond(x, i_x, y, i_y);
				else if ((i_y == y && i_x == 1) || (i_y == 1 && i_x == x))
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				ft_putchar(' ');
			i_x++;
		}
		ft_putchar('\n');
		i_y++;
	}
}
