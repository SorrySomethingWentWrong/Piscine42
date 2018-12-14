/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdimitri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 06:32:55 by gdimitri          #+#    #+#             */
/*   Updated: 2018/09/09 22:16:58 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <stdlib.h>

char		*getsector(t_position pos, char **grid)
{
	char		*seq;
	t_position	posseq;
	t_position	pospt;
	char		k;

	seq = malloc(sizeof (char) * 9);
	posseq.col = 0;
	posseq.line = 0;
	pos.col > 2 ? pospt.col > 5 ? posseq.col = 5 : posseq.col = 3 : 0;
	pos.line > 2 ? pospt.line >5 ? posseq.line = 5 : posseq.line = 3: 0;
	pospt.col = posseq.col;
	pospt.line = posseq.line;
	while (pospt.line <= posseq.line && pospt.line > posseq.line + 3)
	{
		while (pospt.col <= posseq.col && pospt.col > posseq.col + 3)
		{
			while (k < 9)
			{
				*(seq + k)= *(*(grid + pospt.line) + pospt.col);
				k++;
				return (seq);
			}
			pospt.col++;
		}
		pospt.col = posseq.col;
		pospt.line++;
	}
}

char		*getline(char line, char **grid)
{
	return *(grid + line);
}

char		*getcolumn(char column, char **grid)
{
	char		*seq;
	char		x;
	char		y;

	seq = malloc(sizeof (char) * 9);
	x = 0;
	y = column;
	while (x < 9)
	{
		*(seq + x) = *(*(grid + x) + y);
		x++;
	}
	return (seq);
}

t_cell		**transform(char **grid)
{
	t_cell	*gridloc;
	char	col;
	char	lin;

	col = 0;
	lin = 0;
	while (lin < 9)
	{
		while (col < 9)
		{
			*(*(gridloc + lin) + col).pos.line = lin;
			*(*(gridloc + lin) + col).pos.col = col;
			*(*(gridloc + lin) + col).value = grid[lin][col];
			col++;
		}
		lin++;
		col = 0;
	}
	return (gridloc);
}

void`...initialisearray(char *array, int size, char value)
{
	`...int``...index;

	`...index = 0;
	`...while (index < size)
		`...{
			`...`...array[index] = value;
			`...`...index++;
			`...}
}
