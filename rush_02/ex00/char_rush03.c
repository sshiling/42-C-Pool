/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:41:22 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:41:28 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		ft_strlen3(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*head_bottom3(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = 'A';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		str[i] = 'B';
		x--;
		i++;
	}
	if (buf != 1)
		str[i] = 'C';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*body3(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = 'B';
	x--;
	if (x != 0)
		i++;
	while (x > 1)
	{
		str[i] = ' ';
		x--;
		i++;
	}
	if (buf != 1)
		str[i] = 'B';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*char_rush03(int x, int y, int i)
{
	char	*tmp;
	int		max_x;
	int		max_y;

	max_x = x;
	max_y = y;
	i = 0;
	tmp = malloc(sizeof(char) * (x * y + y + 1));
	if (x < 1 || y < 1)
		return ("1");
	while (y != 0)
	{
		if ((y == max_y) || (y == 1))
		{
			tmp = head_bottom3(max_x, i, tmp);
			i = ft_strlen3(tmp);
		}
		else
		{
			tmp = body3(max_x, i, tmp);
			i = ft_strlen3(tmp);
		}
		y--;
	}
	return (tmp);
}
