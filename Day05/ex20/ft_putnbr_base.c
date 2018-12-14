/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 03:23:00 by tramet            #+#    #+#             */
/*   Updated: 2018/09/20 03:23:03 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

unsigned char	ft_check_duplicates(char *str, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (i != j)
				if (str[i] == str[j])
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	ft_stlen(char *s)
{
	return (*s ? 1 + ft_stlen(++s) : 0);
}

void			ft_recurs_base(int nbr, char *base, unsigned int len)
{
	if (nbr)
	{
		ft_recurs_base(nbr / len, base, len);
		ft_putchar(*(base + (nbr % len)));
	}
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;

	len = ft_stlen(base);
	if (ft_check_duplicates(base, len))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_recurs_base(-(nbr / len), base, len);
			ft_putchar(*(base + (nbr % len)));
		}
		else
			ft_recurs_base(nbr, base, len);
	}
}
