/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probabilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:25:02 by tramet            #+#    #+#             */
/*   Updated: 2018/09/09 22:21:23 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <stdlib.h>

void		*setprobofcell(t_cell cell, char **grid)
{
	char	*mask;
	char	index;

	mask = malloc(sizeof (char) * 9);
	initialisearray(mask, 9, (char)1);
	index = 0;
	while (index < 9)
	{
		*(*(grid + cell.pos.line) + index);
		index++;
	}
	index = 0;
	while (index < 9)
	{
		if (cell.pos.line != index)
			mask[grid[index][cell.pos.col] - 1] = 0;
		index++;
	}
	cell.prob.mask = mask;
}

t_cell		**getprobgrid(char **grid)
{
	t_cell			**probgrid;
	t_position		i;

	i.line = 0;
	probgrid = malloc(sizeof(t_cell *) * 9);
	while(i.line < 9)
	{
		*(probgrid + i.line) = malloc(sizeof(t_cell) * 9);
		i.line++;
	}
	while (i.line < 9)
	{
		i.col = 0;
		while (i.col < 9)
		{
			probgrid[i.line][i.col].value = grid[i.line][i.col];
			probgrid[i.line][i.col].pos.line = i.line;
			probgrid[i.line][i.col].pos.col = i.col;
			if (probgrid[i.line][i.col].value == 0)
				setprobofcell(probgrid[i.line][i.col], grid);
			i.col++;
		}
		i.line++;
	}
	return (probgrid);
}
