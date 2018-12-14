/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:54:23 by sofernan          #+#    #+#             */
/*   Updated: 2018/09/16 23:24:23 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "s_struct.h"

t_list		*ft_read(unsigned *line, unsigned *col)
{
	char			c;
	unsigned int	x;
	unsigned int	y;
	t_list			*link;

	x = 0;
	y = 0;
	link = NULL;
	while (read(0, &c, sizeof(c)) == 1)
	{
		if (c == '\n')
		{
			y++;
			*col = x;
			x = 0;
		}
		if (!(ft_add_link(&link, x,y, c)))
			return (NULL);
		x++;
	}
	*line = y;
	return (link);
}

/*
** Crée le premier maillon de la chaine (next et prev vallent NULL)
*/

t_list		*ft_create_first_link(char c)
{
	t_list	*link;

	if (!(link = (t_list *)malloc(sizeof(*link))))
	{
		return (NULL);
	}
	link->c = c;
	link->x = 0;
	link->y = 0;
	link->next = NULL;
	link->prev = NULL;
	return (link);
}
