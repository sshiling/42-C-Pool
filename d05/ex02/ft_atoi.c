/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:03:50 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/26 15:14:50 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int		nb;
	int		n;
	int		i;

	nb = 0;
	n = 1;
	i = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * n);
}
