/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:17:41 by sofernan          #+#    #+#             */
/*   Updated: 2018/09/16 22:09:01 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_struct.h"

t_list	*rush00(int x, int y)
{
	int		i;
	int		j;
	t_list	*link;

	i = -1;
	link = NULL;
	while (++i + 1 && (j = -1) && (y > 0 && x > 0 && i < y))
	{
		while (++j + 1 && j < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == x - 1)
					|| (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
				ft_add_link(&link, j, i, 'o');
			else if (i == 0)
				ft_add_link(&link, j, i, '-');
			else if (j == 0 || j == x - 1)
				ft_add_link(&link, j, i, '|');
			else if (i == y - 1)
				ft_add_link(&link, j, i, '-');
			else
				ft_add_link(&link, j, i, ' ');
		}
		ft_add_link(&link, j, i, '\n');
	}
	return (link);
}
