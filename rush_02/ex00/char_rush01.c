/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:40:33 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:40:40 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		ft_strlen1(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*head1(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = '/';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		str[i] = '*';
		x--;
		i++;
	}
	if (buf != 1)
		str[i] = '\\';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*bottom1(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = '\\';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		str[i] = '*';
		x--;
		i++;
	}
	if (buf != 1)
		str[i] = '/';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*body1(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = '*';
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
		str[i] = '*';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*char_rush01(int x, int y, int i)
{
	char	*tmp;
	int		max_y;

	max_y = y;
	tmp = malloc(sizeof(char) * (x * y + y + 1));
	while (y != 0)
	{
		if (y == max_y)
		{
			tmp = head1(x, i, tmp);
			i = ft_strlen1(tmp);
		}
		else if (y == 1)
		{
			tmp = bottom1(x, i, tmp);
			i = ft_strlen1(tmp);
		}
		else
		{
			tmp = body1(x, i, tmp);
			i = ft_strlen1(tmp);
		}
		y--;
	}
	return (tmp);
}
