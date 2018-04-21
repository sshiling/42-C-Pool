/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 12:22:42 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 17:23:14 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		*ft_range(int min, int max)
{
	int		*range;
	int		x;

	x = 0;
	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(*range) * (max - min));
	while (min < max)
	{
		range[x] = min;
		min++;
		x++;
	}
	return (range);
}
