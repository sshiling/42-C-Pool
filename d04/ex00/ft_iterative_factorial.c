/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 21:08:36 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/22 22:26:20 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	if (nb > 1)
	{
		while (nb > 1)
		{
			factorial = factorial * (nb - 1);
			nb--;
		}
	}
	return (factorial);
}
