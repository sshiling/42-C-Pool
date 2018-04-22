/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 16:39:22 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 22:22:58 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int		main(void)
{
	char	buf1[BUF_SIZE];
	int		ret;
	char	*str;

	ret = 0;
	str = malloc(sizeof(char) * 0);
	while ((ret = read(0, buf1, BUF_SIZE)))
	{
		str = ft_memory(str, buf1);
	}
	writer(str);
	write(1, "\n", 1);
	return (0);
}
