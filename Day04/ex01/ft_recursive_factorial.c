/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:49:02 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 14:57:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fac_result;

	if (nb < 0 || nb > 12)
		return (0);
	if (0 == nb || nb == 1)
		return (1);
	fac_result = ft_recursive_factorial(nb - 1);
	return (nb * fac_result);
}
