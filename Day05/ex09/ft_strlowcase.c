/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:06:57 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:41:58 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	if (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
	}
	else
		return (str);
	ft_strlowcase(str + 1);
	return (str);
}
