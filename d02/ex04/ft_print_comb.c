/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:38:37 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/21 13:39:23 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int k;
	int l;
	int m;

	k = '0';
	while (k++ <= '7')
	{
		l = k;
		while (l++ <= '8')
		{
			m = l;
			while (m <= '9')
			{
				if (m != '2')
					ft_putchar(',');
				if (m != '2')
					ft_putchar(' ');
				ft_putchar(k - 1);
				ft_putchar(l - 1);
				ft_putchar(m);
				m++;
			}
		}
	}
}
