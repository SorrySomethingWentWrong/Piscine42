/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:33:01 by tramet            #+#    #+#             */
/*   Updated: 2018/09/13 17:59:21 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	unsigned int	i;
	int				swap;

	while (size > 1)
	{
		i = 0;
		while (i < (unsigned)size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				swap = *(tab + i + 1);
				*(tab + i + 1) = *(tab + i);
				*(tab + i) = swap;
			}
			i++;
		}
		size--;
	}
}
