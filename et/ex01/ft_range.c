/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:39:03 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 10:14:13 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	tab = malloc(sizeof(int) * max - min);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
