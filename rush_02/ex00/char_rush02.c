/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:34:20 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:36:14 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

char	*char_rush02(int x, int y, int i)
{
	char	*tmp;
	int		max_y;

	max_y = y;
	tmp = malloc(sizeof(char) * (x * y + y + 1));
	while (y != 0)
	{
		if (y == max_y)
		{
			tmp = head2(x, i, tmp);
			i = ft_strlen2(tmp);
		}
		else if (y == 1)
		{
			tmp = bottom2(x, i, tmp);
			i = ft_strlen2(tmp);
		}
		else
		{
			tmp = body2(x, i, tmp);
			i = ft_strlen2(tmp);
		}
		y--;
	}
	return (tmp);
}

char	*head2(int x, int i, char *tmp)
{
	int buf;

	buf = x;
	tmp[i] = 'A';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		tmp[i] = 'B';
		x--;
		i++;
	}
	if (buf != 1)
		tmp[i] = 'A';
	tmp[i + 1] = '\n';
	tmp[i + 2] = '\0';
	return (tmp);
}

char	*bottom2(int x, int i, char *tmp)
{
	int buf;

	buf = x;
	tmp[i] = 'C';
	x--;
	if (x != 0)
		i++;
	while (x > 1)
	{
		tmp[i] = 'B';
		x--;
		i++;
	}
	if (buf != 1)
		tmp[i] = 'C';
	tmp[i + 1] = '\n';
	tmp[i + 2] = '\0';
	return (tmp);
}

char	*body2(int x, int i, char *tmp)
{
	int buf;

	buf = x;
	tmp[i] = 'B';
	x--;
	if (x != 0)
		i++;
	while (x > 1)
	{
		tmp[i] = ' ';
		x--;
		i++;
	}
	if (buf != 1)
		tmp[i] = 'B';
	tmp[i + 1] = '\n';
	tmp[i + 2] = '\0';
	return (tmp);
}

int		ft_strlen2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
