/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:28:38 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:36:36 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		ft_strlen4(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*head4(int x, int i, char *str)
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

char	*bottom4(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = 'C';
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
		str[i] = 'A';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*body4(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = 'B';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		str[i] = ' ';
		x--;
		i++;
	}
	if (buf != 0)
		str[i] = 'B';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*char_rush04(int x, int y, int i)
{
	char	*tmp;
	int		max_y;

	max_y = y;
	tmp = malloc(sizeof(char) * (x * y + y + 1));
	while (y != 0)
	{
		if (y == max_y)
		{
			tmp = head4(x, i, tmp);
			i = ft_strlen4(tmp);
		}
		else if (y == 1)
		{
			tmp = bottom4(x, i, tmp);
			i = ft_strlen4(tmp);
		}
		else
		{
			tmp = body4(x, i, tmp);
			i = ft_strlen4(tmp);
		}
		y--;
	}
	return (tmp);
}
