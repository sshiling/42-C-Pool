/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 22:32:25 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/26 23:09:34 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		k;
	int		l;

	i = 0;
	k = 0;
	l = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			l++;
		i++;
	}
	if (k == l || k == 0)
		return (1);
	else
		return (0);
}
