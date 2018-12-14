/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdimitri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:37:37 by gdimitri          #+#    #+#             */
/*   Updated: 2018/09/09 22:22:15 by gdimitri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STRUCT_H__
# define __FT_STRUCT_H__
# define END 100

typedef struct	s_position
{
	char				line;
	char				col;

}				t_position;

typedef struct	s_probability
{
	char				mask[9];

}				t_probability;

typedef struct	s_cell
{
	t_position			pos;
	t_probability		prob;
	char				value;

}				t_cell;

/* ************************************************************************** */
/* *************************prototype et description************************* */
/* ************************************************************************** */

void		initialisearray(char *array, int size, char value);

char		checkallgrid(char **grid);

char		countval(char **grid);

void		printsudoku(char **grid);

void		argerror(void);

char		argcheck(char *str);

/* ******proto de ft_manage****** */

char		*getsector(t_cell cel, char **grid);
// prend une position et une grille en entre et retourn le secteur

char		*getline(char line, char **grid);
//

char		*getcolumn(char column, char **grid);
//

t_cell	**transform(char **grid);
//applique une valleur a chaque case

/* ******proto de gdimitri****** */

void		square(char **grid);
// prend le tableau en entrer et retourn les grilles de chaque secteur
// probablement tres inutil

/* ******proto de ft_algoprob****** */

char		trytosolve(t_cell loc);
//resous les prtie simple de la grille

t_cell	**solvegrid(t_cell **gridloc);
//fonction qui rend au back traque la grille simplifier

t_cell	**eliminateprobs(t_cell **gridloc);
//elimine tt possibiliter impossible

char		gridlocissimilar(t_cell **gridloc1, t_cell **gridloc2);
//compare 2 grilles (probas) rend 1 si identique, sinon 0.
//Ne verrifie que les valeurs

t_cell	**matchsector(t_cell **sector);
//fonction soujacente de eliminateprops

/* ******proto de ft_prob****** */
t_cell	**get_probabilty_location (char **gloc);
//

t_cell	*getefficientpath(t_cell **gloc);
//

t_position	*getloclistlen (t_cell liste);
//recupe tt les position vide

t_position	*get_pos_section (t_position section);
//recupe pos vide par secteur

t_position	*get_pos_incol (char col);
//recupe pos vide sur col

t_position	*get_pos_inline(char line);
//recupe pos sur line

/* ******proto de kyoya****** */

void checkLineColumn(char **grid);
//

char		*getPossibilitiesCase(t_cell loc, char **grid);
//

/* ******proto de ft_backtracking****** */

char		ft_backtracking(t_cell *loclist, char **grid);
// fonction de backtraking classique

/* ******proto de ft_check****** */

char		*countoccurence(char *sequence);
//

char		isvalidmask(char *mask);
//

 /* ******proto de main****** */

char		checkchar(char c);
//

int			main(int argc, char *argv[]);
// LE MAIN

/* ************************************************************************** */
/* *************************************fin********************************** */
/* ************************************************************************** */

#endif
