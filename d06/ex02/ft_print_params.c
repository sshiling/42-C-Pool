/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:00:38 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/27 17:08:46 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;
	int m;

	n = 0;
	m = 1;
	while (m < argc)
	{
		while (argv[m][n] != '\0')
		{
			ft_putchar(argv[m][n]);
			n++;
		}
		n = 0;
		m++;
		ft_putchar('\n');
	}
	return (0);
}
