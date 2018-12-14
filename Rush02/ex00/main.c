/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:09:00 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:42:37 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_struct.h"

int		main()
{
	t_list		*link;
	t_list		**rush[5];
	unsigned	line;
	unsigned	col;

	link = ft_read(&line, &col);
	rush[0] = rush00(((col >= 2) ? col - 1 : col), line);
	rush[1] = rush01(((col >= 2) ? col - 1 : col), line);
	rush[2] = rush02(((col >= 2) ? col - 1 : col), line);
	rush[3] = rush03(((col >= 2) ? col - 1 : col), line);
	rush[4] = rush03(((col >= 2) ? col - 1 : col), line);
	ft_is_same(link, rush[0]);
	return (0);
}

