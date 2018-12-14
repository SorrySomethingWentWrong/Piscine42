/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:39:37 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 14:43:41 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int nextprime;

	if (nb % 2 == 0)
		nextprime = nb + 1;
	else
		nextprime = nb + 2;
	while (!is_prime(nextprime))
	{
		nextprime += 2;
	}
	return (nextprime);
}
