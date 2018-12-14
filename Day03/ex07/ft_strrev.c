/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:59:58 by tramet            #+#    #+#             */
/*   Updated: 2018/09/11 19:49:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[len + 1] != '\0')
		len++;
	while (i < len)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		i++;
		len--;
	}
	return (str);
}
