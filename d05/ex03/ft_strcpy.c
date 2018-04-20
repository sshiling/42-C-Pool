/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 18:40:18 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/25 19:14:35 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int		n;
	int		k;

	n = 0;
	k = 0;
	while (src[k] != '\0')
		k++;
	while (n < k)
	{
		dest[n] = src[n];
		n++;
	}
	dest[k] = '\0';
	return (dest);
}
