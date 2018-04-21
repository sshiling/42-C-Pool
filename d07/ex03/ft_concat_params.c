/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 22:19:07 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 23:39:48 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
int		value(int argc, char **argv);

int		value(int argc, char **argv)
{
	int i;
	int k;
	int len;

	len = 0;
	k = 1;
	i = 0;
	while (k < argc)
	{
		while (argv[k][i] != '\0')
		{
			len++;
			i++;
		}
		i = 0;
		k++;
	}
	i = 0;
	k = 1;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	char	*res;
	int		j;

	j = 0;
	i = 0;
	k = 1;
	res = (char*)malloc(sizeof(char) * ((value(argc, argv) + 1) + argc - 1));
	while (k < argc)
	{
		while (argv[k][i] != '\0')
		{
			res[j] = argv[k][i];
			i++;
			j++;
		}
		res[j] = '\n';
		j++;
		i = 0;
		k++;
	}
	res[j - 1] = '\0';
	return (res);
}
