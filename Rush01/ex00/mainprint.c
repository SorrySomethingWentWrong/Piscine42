/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:10:36 by tramet            #+#    #+#             */
/*   Updated: 2018/09/09 22:23:23 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	printsudoku(char **grid)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	y = 0;
	while (x < 9)
	{
		while (y < 9)
		{
			c = '0';
			c += grid[x][y];
			write(1, &c, 1);
			write(1, " ", 1);
			y++;
		}
		y = 0;
		write(1, "\n", 1);
		x++;
	}
}

void	argerror(void)
{
	write(1, "Error\n", 6);
}

char	argcheck(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] < '0')
			if (str[i] != '.')
				return (0);
		if (str[i] > '9')
			return (0);
		i++;
	}
	if (i != 10)
		return (0);
	return (1);
}

char	*getgridline(char *str)
{
	char	*line;
	char	index;

	line = (char*)malloc(sizeof(char) * 9);
	index = 0;
	while (index < 9)
	{
		if (*(str + index) == '.')
			line[(int)index] = *(str + index) - 46;
		else
			line[(int)index] = *(str + index) - 48;
		index++;
	}
	return (line);
}

int		main(int argc, char *argv[])
{
	char			*grid[9];
	unsigned int	idx;

	if (argc != 10)
	{
		argerror();
		return (1);
	}
	else
	{
		idx = 1;
		while (idx < ((unsigned int)argc))
		{
			if (argcheck(*(argv + idx)))
			{
				argerror();
				return (1);
			}
			else
				grid[idx - 1] = getgridline(argv[idx]);
			idx++;
		}
	}
	printsudoku(grid);
	return (0);
}
