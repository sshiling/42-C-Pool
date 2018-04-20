/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 20:24:12 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/22 21:44:23 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	int		c;
	char	tmp;

	a = 0;
	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	c = b / 2;
	while (b > c)
	{
		tmp = str[a];
		str[a] = str[b - 1];
		str[b - 1] = tmp;
		a++;
		b--;
	}
	return (str);
}
