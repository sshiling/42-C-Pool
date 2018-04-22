/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:27:47 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:28:03 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_memory(char *old, char *new)
{
	int		l1;
	int		l2;
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	l1 = ft_strlen(old);
	l2 = ft_strlen(new);
	line = malloc(sizeof(char) * (l1 + l2 + 1));
	while (old[i])
	{
		line[i] = old[i];
		i++;
	}
	while (new[j])
	{
		line[i] = new[j];
		i++;
		j++;
	}
	line[i++] = '\0';
	return (line);
}
