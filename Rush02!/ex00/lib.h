/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:30:55 by alakhdar          #+#    #+#             */
/*   Updated: 2021/08/22 15:01:51 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int	len_n(char *str);
void	checkstart(int tabd, int j);
int		ft_reader(char	*str);
int		ft_strlen(char	*str);
int		ft_strncmp(char	*s1, char	*s2, unsigned int	n);
char	*ft_strstr(char	*str, char	*to_find);
char	*ft_strcpy(char	*dest, char	*src);
void	ft_putstr(char	*str);
void	reset_malloc(char	*str, int	count);
int		check(char	*str);
int		len_nb(char	*str);
void	*ft_atoi_tab_3(char	*str, int	*tab);
void	nombre(int	nb);
void	big(int	n, int nb);
void	centaine(int	nb);
void	dizaine(int	nb);
void	unite(int	nb);
#endif
