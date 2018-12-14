/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:12:56 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 14:48:02 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 2 && index >= 0)
		return (index);
	else if (index >= 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}
