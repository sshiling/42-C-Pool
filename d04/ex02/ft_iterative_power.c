/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 21:08:36 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/23 23:09:00 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int rengers;

	rengers = nb;
	if (power < 0)
		rengers = 0;
	if (power > 0)
	{
		while (power > 1)
		{
			rengers = rengers * nb;
			power--;
		}
	}
	if (power == 0)
		rengers = 1;
	return (rengers);
}
