/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:18:35 by tramet            #+#    #+#             */
/*   Updated: 2018/09/11 20:51:16 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int				i;
	unsigned int	result;
	int				neg;

	i = 0;
	result = 0;
	neg = 1;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if ((str[i] == '-' ? neg = -1 : 0) || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (neg * result);
}
