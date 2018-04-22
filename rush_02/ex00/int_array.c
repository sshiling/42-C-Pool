/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:26:17 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:24:29 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		*int_array(char *string)
{
	char	**res;
	int		*int_array;

	int_array = (int*)malloc(sizeof(int) * 5);
	res = result(string);
	int_array[0] = ft_strcmp(res[0], string);
	int_array[1] = ft_strcmp(res[1], string);
	int_array[2] = ft_strcmp(res[2], string);
	int_array[3] = ft_strcmp(res[3], string);
	int_array[4] = ft_strcmp(res[4], string);
	return (int_array);
}
