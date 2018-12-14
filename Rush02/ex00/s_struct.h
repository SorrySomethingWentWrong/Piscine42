/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_struct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:29:51 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:37:39 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STRUCT_H
#define S_STRUCT_H

#include <unistd.h>

typedef struct s_list	t_list;

struct		s_list
{
	char		c;
	unsigned	x;
	unsigned	y;
	t_list		*next;
	t_list		*prev;
};

/*
** Grâce au nombre de colonnes et de lignes renvoie sous forme de liste chaînée
*/

t_list		*rush00(int x, int y);

/*
** Grâce au nombre de colonnes et de lignes renvoie sous forme de liste chaînée
*/

t_list		*rush01(int x, int y);

/*
** Grâce au nombre de colonnes et de lignes renvoie sous forme de liste chaînée
*/

t_list		*rush02(int x, int y);

/*
** Grâce au nombre de colonnes et de lignes renvoie sous forme de liste chaînée
*/

t_list		*rush03(int x, int y);

/*
** Grâce au nombre de colonnes et de lignes renvoie sous forme de liste chaînée
*/

t_list		*rush04(int x, int y);

/*
**                             [ ft_read.c ]
*/

/*
** Ajoute un chainon à la fin de la liste, renvoie le chainon nouvellement crée
*/

t_list		*ft_add_link(t_list **list, unsigned x, unsigned y, char c);

/*
** libère la mémoire de la chaîne en partant de la fin
*/

void		ft_free_from_last(t_list *link);

/*
** libère la mémoire de la chaîne en partant du début
*/

void		ft_free_from_first(t_list *link);

/*
** recupere le premier element de la chaine grace à sa taille
*/

t_list		*ft_get_first_link(t_list *link, unsigned int size);

/*
** 1 si les deux chaines sont identiques ! la premiere list doit sortir de read
*/

char		ft_is_same(t_list *l1, t_list *l2);

/*
**                             [ ft_read.c ]
*/

/*
** Lis dans l'entree standard, renvoie une liste chainee de ce qu'elle a lu
*/

t_list		*ft_read(unsigned *line, unsigned *col);

/*
** Crée le premier maillon de la chaine (next et prev vallent NULL)
*/

t_list		*ft_create_first_link(char c);

/*
**                             [ ft_print.c ]
*/

/*
** affiche "aucunes\n" sur la sortie standard
*/

void		ft_print_error();

/*
** Affiche le résultat.
*/

void		ft_print_result(char numex, int lines, int col);

#endif
