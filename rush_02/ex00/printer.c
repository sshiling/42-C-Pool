/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 21:25:50 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:33:44 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		printer0(int d, int rows, int columns)
{
	int		q;

	q = 0;
	if (d == 0)
	{
		ft_putstr("[rush00] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
		q = 1;
	}
	return (q);
}

int		printer1(int q, int d, int rows, int columns)
{
	if (d == 0 && q != 0)
	{
		ft_putstr(" || [rush01] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
	}
	if (d == 0 && q == 0)
	{
		ft_putstr("[rush01] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
		q = 1;
	}
	return (q);
}

int		printer2(int q, int d, int rows, int columns)
{
	if (d == 0 && q != 0)
	{
		ft_putstr(" || [rush02] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
	}
	if (d == 0 && q == 0)
	{
		ft_putstr("[rush02] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
		q = 1;
	}
	return (q);
}

int		printer3(int q, int d, int rows, int columns)
{
	if (d == 0 && q != 0)
	{
		ft_putstr(" || [rush03] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
	}
	if (d == 0 && q == 0)
	{
		ft_putstr("[rush03] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
		q = 1;
	}
	return (q);
}

void	printer4(int q, int d, int rows, int columns)
{
	if (d == 0 && q != 0)
	{
		ft_putstr(" || [rush04] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
	}
	if (d == 0 && q == 0)
	{
		ft_putstr("[rush04] [");
		ft_putnbr(rows);
		ft_putstr("] [");
		ft_putnbr(columns);
		ft_putstr("]");
		q = 1;
	}
	if (q == 0)
		ft_putstr("aucune");
}
