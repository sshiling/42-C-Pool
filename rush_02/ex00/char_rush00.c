/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:40:59 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:41:04 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

char	*char_rush00(int x, int y, int i)
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
			tmp = head_bottom0(max_x, i, tmp);
			i = ft_strlen0(tmp);
		}
		else
		{
			tmp = body0(max_x, i, tmp);
			i = ft_strlen0(tmp);
		}
		y--;
	}
	return (tmp);
}

char	*head_bottom0(int x, int i, char *str)
{
	int	buf;

	buf = x;
	str[i] = 'o';
	if (x != 1)
		i++;
	x--;
	while (x > 1)
	{
		str[i] = '-';
		x--;
		i++;
	}
	if (buf != 1)
		str[i] = 'o';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

char	*body0(int x, int i, char *str)
{
	int buf;

	buf = x;
	str[i] = '|';
	x--;
	if (x != 0)
		i++;
	while (x > 1)
	{
		str[i] = ' ';
		x--;
		i++;
	}
	if (buf != 0)
		str[i] = '|';
	str[i + 1] = '\n';
	str[i + 2] = '\0';
	return (str);
}

int		ft_strlen0(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
