/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 11:23:28 by kwatanab          #+#    #+#             */
/*   Updated: 2018/09/09 22:04:30 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <stdlib.h>

char	ft_backtracking(t_cell *cells, char **grid)
{
	char	*masktotest;
	char	idx_mask;

	if(cells->value == END)
	{
		if (checkallgrid(grid))
		{
			printsudoku(grid);
			return (1);
		}
		else
			return (0);
	}
	else
	{
		idx_mask = 0;
		masktotest = malloc(sizeof(char) * 9);
		masktotest = cells->prob.mask;
		while (*(masktotest + idx_mask) < 9)
		{
			if(*(masktotest + idx_mask) == 1)
			{
				*(*(grid + cells->pos.line) + cells->pos.col) = idx_mask + 1;
				if (ft_backtracking(cells + 1, grid))
					return (1);
			}
			idx_mask++;
		}
		*(*(grid + cells->pos.line) + cells->pos.col) = idx_mask + 1;
		return (0);
	}
}
