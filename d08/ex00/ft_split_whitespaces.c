/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 14:46:44 by sshiling          #+#    #+#             */
/*   Updated: 2017/09/30 21:51:26 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SEPARATOR(x) x == ' ' || x == '\n' || x == '\t'

#include <stdlib.h>

int		ft_words_counter(char *str)
{
	int		i;
	int		indicator;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		indicator = 0;
		while (SEPARATOR(str[i]) && str[i] != '\0')
			i++;
		while (!(SEPARATOR(str[i])) && str[i] != '\0')
		{
			indicator = 1;
			i++;
		}
		while (SEPARATOR(str[i]) && str[i] != '\0')
			i++;
		if (indicator == 1)
			words++;
	}
	return (words);
}

int		new_str_size(char *str)
{
	int		i;

	i = 0;
	while (SEPARATOR(str[i]) && str[i] != '\0')
		str++;
	while (!(SEPARATOR(str[i])) && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		words_counter;
	int		key;
	int		i;
	char	**array;
	char	*new_str;

	i = 0;
	key = 0;
	words_counter = ft_words_counter(str);
	array = (char**)malloc(sizeof(char*) * (words_counter + 1));
	while (key < words_counter)
	{
		new_str = (char*)malloc(sizeof(char) * (new_str_size(str) + 1));
		while (SEPARATOR(str[0]) && str[0] != '\0')
			str++;
		while (!(SEPARATOR(str[0])) && str[0] != '\0')
			new_str[i++] = *str++;
		new_str[i] = '\0';
		array[key++] = new_str;
		i = 0;
	}
	array[words_counter] = 0;
	return (array);
}
