/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:43:26 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 15:21:54 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		square;

	square = 0;
	while (square * square < nb)
		square++;
	if (square * square == nb)
		return (square);
	return (0);
}
