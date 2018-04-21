/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:05:36 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 23:29:01 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_antidote(int x, int y, int z);

int		ft_antidote(int x, int y, int z)
{
	if ((x >= y && x <= z) || (x <= y && x >= z))
		return (x);
	else if ((y >= x && y <= z) || (y <= x && y >= z))
		return (y);
	else
		return (z);
}
