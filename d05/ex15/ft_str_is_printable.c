/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 22:32:25 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/26 23:32:33 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);

int		ft_str_is_printable(char *str)
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
		if (str[i] < ' ')
			l++;
		i++;
	}
	if (l >= 1)
		return (0);
	else if (k == 0)
		return (1);
	else
		return (1);
}
