/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 12:22:42 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 22:09:09 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	int		x;
	int		*array;

	x = 0;
	if (min >= max)
	{
		range = ((void *)0);
		return (0);
	}
	array = (int*)malloc(sizeof(array) * (max - min));
	while (min < max)
	{
		array[x] = min;
		min++;
		x++;
	}
	range = &array;
	return (x);
}
