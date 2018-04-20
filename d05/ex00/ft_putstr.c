/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:34:39 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/25 10:56:50 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}
