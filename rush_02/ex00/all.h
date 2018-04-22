/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:53:23 by sshiling          #+#    #+#             */
/*   Updated: 2017/10/08 23:09:12 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
# define ALL_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 1

char	*head_bottom0(int x, int i, char *str);
char	*body0(int x, int i, char *str);
int		ft_strlen0(char *str);
char	*char_rush00(int x, int y, int i);
char	*head1(int x, int i, char *str);
char	*bottom1(int x, int i, char *str);
char	*body1(int x, int i, char *str);
int		ft_strlen1(char *str);
char	*char_rush01(int x, int y, int i);
char	*head2(int x, int i, char *tmp);
char	*bottom2(int x, int i, char *tmp);
char	*body2(int x, int i, char *tmp);
int		ft_strlen2(char *str);
char	*char_rush02(int x, int y, int i);
int		ft_strlen3(char *str);
char	*head_bottom3(int x, int i, char *str);
char	*body3(int x, int i, char *str);
char	*char_rush03(int x, int y, int i);
int		ft_strlen4(char *str);
char	*head4(int x, int i, char *str);
char	*bottom4(int x, int i, char *str);
char	*body4(int x, int i, char *str);
char	*char_rush04(int x, int y, int i);
int		columns(char *string);
int		rows(char *string);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		*int_array(char *string);
int		printer0(int d, int rows, int columns);
int		printer1(int q, int d, int rows, int columns);
int		printer2(int q, int d, int rows, int columns);
int		printer3(int q, int d, int rows, int columns);
void	printer4(int q, int d, int rows, int columns);
char	**result(char *string);
void	writer(char *string);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
char	*ft_memory(char *old, char *new);

#endif
