=* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoprob.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 07:48:51 by tramet            #+#    #+#             */
/*   Updated: 2018/09/09 19:59:47 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"



char		trytosolve(t_location loc)
{
	char i;
	char matched;

	i = 0;
	matched = 0;
	while (i < 9)
	{
		if (loc.prob.mask[i] == 1)
			if (matched > 0)
				return (0);
			else
			{
				matched = i + 1;
			}
	}
	return (matched);
}

t_location	**solvegrid(t_location **gridloc)
{
	t_location	*possibilities;
	t_location	**glocelmprb;
	char		list_len;

	char		i;

	possibilities = getprobabilitylocations(gridloc);
	list_len = getloclistlen(possibilities);
	i = 0;
	while (i < list_len)
	{
		possibilities[i].pos
			i++;
	}
	return (gridloc);
}

t_location	*getseqmatchs(t_location *seqprobinsec)
{
	t_location	save;
	char		index;
	char		i;
	char		mask_i;

		index = 0;
	while (seqprobinsec[index].value != END)
	{
		if (seqprobinsec[index].value == 0)
		{
			i = 0;
			seqprobinsec[index].value = 10 + index;
				while (seqprobinsec[i] != END)
				{
					mask_i = 0
					while (mask_i < 9)
					{
						if (seqprobinsec[i].prob.mask[mask_i] != 0)
						{
							if (seqprobinsec[index].prob[mask_i] == 1)
								
						}
						mask_i++;
					}
						i++;
				}
		}
		index++;
	}
}

t_location	**eliminateprobs(t_location **gridloc)
{
	char		mask[9];
	char		tormv[9];
	t_position	pos;

	pos.line = 0;
	pos.col = 0;
	tormv[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	while (pos.line < 9)
	{
		while (pos.col < 9)
		{

			pos.col++;
		}
		pos.line++;
	}
	return (gridloc);
}

char		gridlocissimilar(t_location **gloc1, t_location **gloc2)
{
	t_position ipos;

	ipos.line = 0;
	ipos.col = 0;
	while (ipos.line < 9)
	{
		while (ipos.col < 9)
		{
			if (gloc1[ipos.line][ipos.col].value != gloc2[ipos.line][ipos.col].value
			   )
				return (0);
			ipos.col++;
		}
		ipos.line++;
	}
	return (1);
}

t_location	**matchsector(t_location **sector)
{
	char		**mask;
	t_location	*locprobs;
	char		index;
	char		total;
	char		left;

	locprobs = /* cases encore vides du secteur */
		total = /* conte le nombre de locprobs */
		left = /* conte les t_location qui ne sont pas remplis dans le secteur */;
	index = 0;
	while (left != 0)
	{


	}
}
