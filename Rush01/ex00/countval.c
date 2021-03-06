/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:51:40 by kwatanab          #+#    #+#             */
/*   Updated: 2018/09/09 22:02:44 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	countval(char **grid)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			if (grid[x][y] >= 1 && grid[x][y] <= 9)
				i = i + 1;
			x++;
		}
		x = 0;
		y++;
	}
	return (i);
}
