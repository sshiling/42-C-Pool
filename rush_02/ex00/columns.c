/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   columns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:01:48 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:25:34 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		columns(char *string)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '\n')
			count++;
		i++;
	}
	return (count);
}