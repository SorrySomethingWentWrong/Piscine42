/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:32:57 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 12:39:19 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	return (1);
}
