/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gdimitri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdimitri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:17:05 by gdimitri          #+#    #+#             */
/*   Updated: 2018/09/09 22:21:54 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <stdlib.h>

char	*getsector(t_cell cel, char **grid)
{
	char poscol;
	char posln;
	char col;
	char ln;
	char k;
	char *seq;

	seq = malloc(sizeof (char) *9);
	poscol = 0;
	posln = 0;
	if (cel.pos.col > 2)
		poscol = 3;
	if (cel.pos.col > 5)
		poscol = 5;
	if (cel.pos.line > 2)
		posln = 3;
	if (cel.pos.line > 5)
		posln = 5;
	col = poscol;
	ln = posln;
	while (ln <= posln && ln > posln + 3)
	{
		while (col <= poscol && col > poscol + 3)
		{
			while (k < 9)
			{
				*(seq + k) = *(*(grid + ln) + col);
				k++;
				return (seq);
			}
			col++;
		}
		col = poscol;
		ln++;
	}
}
