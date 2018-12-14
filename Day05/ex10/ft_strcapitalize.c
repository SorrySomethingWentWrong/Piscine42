/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:16:44 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:42:57 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	isalphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

unsigned char	isftnrv(char c)
{
	if (c == '\f' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == ' ')
		return (1);
	return (0);
}

char			*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	while (*s != '\0')
	{
		while (isftnrv(*s))
			s++;
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		while (isalphanumeric(*(++s)))
			if (*s >= 'A' && *s <= 'Z')
				*s += 32;
		while (!isalphanumeric(*s) && !isftnrv(*s) && *s)
			s++;
	}
	return (str);
}
