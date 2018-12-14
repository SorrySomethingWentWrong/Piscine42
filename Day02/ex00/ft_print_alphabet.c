/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:05:31 by tramet            #+#    #+#             */
/*   Updated: 2018/09/04 20:22:42 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_alphabet(void)
{
	int		i;
	char	letter;

	i = 0;
	letter = 'a';
	while (i < 26)
	{
		ft_putchar(letter);
		letter++;
		i++;
	}
	return (0);
}
