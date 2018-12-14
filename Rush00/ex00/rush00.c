/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 19:06:39 by hkada             #+#    #+#             */
/*   Updated: 2018/09/01 20:59:41 by hkada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_cond(int x, int i_x, int y, int i_y)
{
	if (i_y == 1 || i_y == y || i_x == 1 || i_x == x)
		if ((i_y == 1 && i_x == 1) || (i_y == y && i_x == x))
			ft_putchar('o');
		else if ((i_y == 1 && i_x == x) || (i_y == y && i_x == 1))
			ft_putchar('o');
		else if (i_y == 1 || i_y == y)
			ft_putchar('-');
		else
			ft_putchar('|');
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
