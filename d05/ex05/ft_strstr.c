/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:46:41 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/26 21:09:40 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}
