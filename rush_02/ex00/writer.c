/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:41:55 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:23:38 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

void	writer(char *string)
{
	int	*numbers;
	int	row;
	int	column;
	int	q;

	q = 0;
	numbers = int_array(string);
	row = rows(string);
	column = columns(string);
	q = printer0(numbers[0], row, column);
	q = printer1(q, numbers[1], row, column);
	q = printer2(q, numbers[2], row, column);
	q = printer3(q, numbers[3], row, column);
	printer4(q, numbers[4], row, column);
}
