/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 07:03:42 by tramet            #+#    #+#             */
/*   Updated: 2018/09/09 21:41:43 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <stdlib.h>

char	*countoccurence(char *sequence)
{
	char	*mask;
	char	index;
	char	nbr;

	index = 0;
	mask = malloc(sizeof(char) * 9);
	initialisearray(mask, 9, (char)0);
	while (index < 10)
	{
		nbr = *(sequence + index);
		if (nbr > 0)
			mask[nbr - 1]++;
		index++;
	}
	return (mask);
}

char	isvalidmask(char *mask)
{
	char index;

	index = 0;
	while (index < 9)
	{
		if (*(mask + index) > 1)
			return (0);
		index++;
	}
	return 1;
}

char	checkcell(t_position pos, char **grid)
{
	char	*seq;
	char	*mask;
	char	isvalid;

	isvalid = 0;
	seq = getline(pos.line, grid);
	mask = countoccurence(seq);
	isvalid += isvalidmask(mask);
	seq = getcolumn(pos.col, grid);
	mask = countoccurence(seq);
	isvalid += isvalidmask(mask);
	seq = getsector(pos, grid);
	mask = countoccurence(seq);
	isvalid += isvalidmask(mask);
	if ((int)isvalidmask == 3)
		return (1);
	else
		return (0);
}

char	checkallgrid(char **grid)
{
	t_position	index;

	index.line = 0;
	while (index.line < 9)
	{
		index.col = 0;
		while (index.col < 9)
		{
			if(!checkcell(index, grid))
				return (0);
			index.col++;
		}
		index.line++;
	}
	return 1;
}
