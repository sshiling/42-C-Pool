/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:00:38 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/27 21:56:02 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;
	int m;

	n = 0;
	m = argc;
	while (argv[0][n] != '\0')
	{
		ft_putchar(argv[0][n]);
		n++;
	}
	ft_putchar('\n');
	return (0);
}
