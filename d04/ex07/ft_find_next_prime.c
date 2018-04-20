/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 21:08:36 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/23 20:24:28 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int		n;

	n = 2;
	if (nb < 2)
		return (0);
	while ((nb % n) != 0)
		n++;
	if (n == nb)
		return (nb);
	ft_find_next_prime(nb + 1);
	return (nb);
}
