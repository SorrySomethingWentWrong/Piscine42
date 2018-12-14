/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_link.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:17:06 by sofernan          #+#    #+#             */
/*   Updated: 2018/09/16 23:35:26 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "s_struct.h"

/*
** Ajoute un chainon à la suite de la liste, renvoie le chainon nouvellement crée
*/

t_list			*ft_add_link(t_list **list, unsigned x, unsigned y, char c)
{
	t_list	*tmp;
	t_list	*last;

	last = *list;
	if (last == NULL)
		return (*list = ft_create_first_link(c));
	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
	{
		return (NULL);
	}
	tmp->c = c;
	tmp->x = x;
	tmp->y = y;
	tmp->prev = last;
	tmp->next = NULL;
	last->next = tmp;
	return (*list = tmp);
}

/*
** libère la mémoire de la chaîne en partant du début
*/

void			ft_free_from_first(t_list *link)
{
	if (!link)
		return ;
	ft_free_from_first(link->next);
	free(link);
}

/*
** libère la mémoire de la chaîne en partant de la fin
*/

void			ft_free_from_last(t_list *link)
{
	if (!link)
		return ;
	ft_free_from_last(link->prev);
	free(link);
}

/*
** 1 si les deux chaines sont identiques /!\ la premiere list doit sortir de read
*/

char			ft_is_same(t_list *l1, t_list *l2)
{
	if (l1 && l2)
	{
		return ((l1->c == l2->c ? 1 : 0) * ft_is_same(l1->prev, l2->prev));
	}
	if (!l1)
		return (1);
	return (0);
}

/*
** recupere le premier element de la chaine grace à sa taille
*/

t_list			*ft_get_first_link(t_list *link, unsigned int size)
{
	if (link)
	{
		while (size > 0)
		{
			link = link->next;
			size--;
		}
	}
	else
		return (NULL);
	return (link);
}
