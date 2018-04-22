/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:05:03 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:25:55 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

char		**result(char *string)
{
	int		i;
	int		row;
	int		column;
	char	**result;

	result = (char**)malloc(sizeof(char*) * 6);
	i = 0;
	row = rows(string);
	column = columns(string);
	result[0] = char_rush00(row, column, i);
	result[1] = char_rush01(row, column, i);
	result[2] = char_rush02(row, column, i);
	result[3] = char_rush03(row, column, i);
	result[4] = char_rush04(row, column, i);
	result[5] = "\0";
	return (result);
}
