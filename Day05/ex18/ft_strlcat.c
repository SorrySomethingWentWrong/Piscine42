/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:07:14 by tramet            #+#    #+#             */
/*   Updated: 2018/09/17 00:07:56 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *s)
{
	return (*s ? 1 + ft_str_len(++s) : 0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	rtrn;

	dest += (rtrn = ft_str_len(dest));
	while (--size && *src)
	{
		*dest = *src;
		rtrn++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (rtrn);
}
