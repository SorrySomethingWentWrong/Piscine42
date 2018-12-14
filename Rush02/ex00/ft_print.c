/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:37:22 by mybenzar          #+#    #+#             */
/*   Updated: 2018/09/16 19:23:29 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void static	ft_putchar(char c)
{
	write(1, &c, 1);
}

void static	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void static	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

/*
** Affiche le résultat.
*/

void		ft_print_result(char numex, int lines, int col)
{
	ft_putstr("[colle-");
	ft_putnbr(numex);
	ft_putstr("] [");
	ft_putnbr(lines);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("]");
}

/*
** affiche "aucunes\n" sur la sortie standard
*/

void		ft_print_error(void)
{
	write(1, "aucune\n", 7);
}

/*
 * Affiche une erreur de malloc
 */

void		ft_print_malloc_error(void)
{
	write(1, "Erreur d'allocation\n", 20);
}
