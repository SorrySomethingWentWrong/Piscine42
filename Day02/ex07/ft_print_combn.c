/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:27:34 by tramet            #+#    #+#             */
/*   Updated: 2018/09/05 14:56:43 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_unint(int nb)
{
	short save;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	save = nb % 10;
	nb /= 10;
	if (nb == 0)
	{
		ft_putchar('0' + save);
		return ;
	}
	else
	{
		print_unint(nb);
		ft_putchar('0' + save);
	}
}

int		power(int nb)
{
	int power;

	power = 1;
	while (nb / power > 0)
		power *= 10;
	power /= 10;
	return (power);
}

int		increase(int nb, int high_val)
{
	int result;
	int pwr;

	if (nb <= high_val)
		nb = high_val++;
	if (nb <= 9)
		return (nb);
	pwr = power(nb);
	result = nb / pwr % 10;
	if (result > high_val)
		high_val = result;
	else
		result = high_val++;
	result *= pwr;
	nb -= result;
	result += increase(nb, high_val);
	return (result);
}

int		max_value(int digit)
{
	int max;
	int dig_val;
	int power;

	max = 0;
	dig_val = 9;
	power = 1;
	while (digit > 0)
	{
		max += dig_val * power;
		power *= 10;
		dig_val--;
		digit--;
	}
	return (max);
}

void	ft_print_combn(int n)
{
	int index;

	if (n < 1 || n > 10)
		return ;
	n = max_value(n);
	index = 1;
	while (index <= n)
	{
		index = increase(index, 0);
		print_unint(index);
		ft_putchar(',');
		ft_putchar(' ');
		index++;
	}
}
