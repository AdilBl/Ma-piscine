/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:14:12 by abelache          #+#    #+#             */
/*   Updated: 2021/08/24 14:42:47 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*src2;

	len = 0;
	while (src[len])
		len++;
	src2 = malloc(sizeof(char) * len + 1);
	if (!src2)
		return (0);
	len = 0;
	while (src[len])
	{
		src2[len] = src[len];
		len++;
	}
	src2[len] = '\0';
	return (src2);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*par;
	int			i;
	int			j;

	par = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!par)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		par[i].size = j;
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
