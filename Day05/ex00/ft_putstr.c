/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:54:47 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:37:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

unsigned int	str_len(char *s)
{
	return (*s ? 1 + str_len(++s) : 0);
}

void			ft_putstr(char *str)
{
	unsigned int	len;

	len = str_len(str);
	while (len)
	{
		ft_putchar(*str);
		str++;
		len--;
	}
}
