/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:16:16 by tramet            #+#    #+#             */
/*   Updated: 2018/09/04 20:36:10 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_reverse_alphabet(void)
{
	int		i;
	char	letter;

	i = 0;
	letter = 'z';
	while (i < 26)
	{
		ft_putchar(letter);
		letter--;
		i++;
	}
	return (0);
}
