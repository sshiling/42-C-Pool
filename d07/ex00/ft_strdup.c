/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 18:40:18 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/28 11:55:15 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		n;
	int		len;
	char	*dest;

	n = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(*src) * (len + 1));
	while (n < len)
	{
		dest[n] = src[n];
		n++;
	}
	dest[len] = '\0';
	return (dest);
}
