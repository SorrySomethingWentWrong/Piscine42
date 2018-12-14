/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:35:56 by tramet            #+#    #+#             */
/*   Updated: 2018/09/13 11:06:46 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	unsigned int	i;
	char			*ptrdest;

	i = 0;
	ptrdest = dest;
	while (ptrdest[i] != '\0')
		i++;
	while (nb > 0)
	{
		ptrdest[i] = *(src)++;
		i++;
		nb--;
	}
	ptrdest[i] = '\0';
	return (dest);
}
