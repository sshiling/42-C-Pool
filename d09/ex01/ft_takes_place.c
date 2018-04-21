/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:46:55 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 19:31:51 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour);

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 && hour < 11)
		printf("%i.00 A.M. AND %i.00 A.M.\n", hour, (hour + 1));
	if (hour == 11)
		printf("%i.00 A.M. AND %i.00 P.M.\n", hour, (hour + 1));
	if (hour == 12)
		printf("%i.00 P.M. AND %i.00 P.M.\n", (hour), (hour - 11));
	if (hour >= 13 && hour < 23)
		printf("%i.00 P.M. AND %i.00 P.M.\n", (hour - 12), (hour - 11));
	if (hour == 23)
		printf("%i.00 P.M. AND %i.00 A.M.\n", (hour - 12), (hour - 11));
	if (hour == 24)
		printf("%i.00 A.M. AND %i.00 A.M.\n", (hour - 12), (hour - 23));
}
