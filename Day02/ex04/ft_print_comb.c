/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:55:07 by tramet            #+#    #+#             */
/*   Updated: 2018/09/04 20:45:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_output(char *ptr_array_head)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i < 3)
		{
			ft_putchar(*(ptr_array_head + i));
		}
		else if (*ptr_array_head != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_print_comb(void)
{
	char array[3];

	array[0] = '0';
	while (array[0] != '8')
	{
		if (array[1] <= array[0])
			array[1] = array[0] + 1;
		if (array[2] <= array[1])
			array[2] = array[1] + 1;
		print_output(&array[0]);
		array[2]++;
		if (array[2] > '9')
		{
			array[1]++;
			array[2] = '0';
		}
		if (array[1] > '8')
		{
			array[0]++;
			array[1] = '0';
		}
	}
}
