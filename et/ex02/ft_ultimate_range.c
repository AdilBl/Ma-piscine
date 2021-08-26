/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:42:34 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 10:01:49 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	i;

	i = min;
	if (min >= max)
	{
		return (0);
		range = 0;
	}
	*range = (int *)malloc(sizeof(int) * ((max - min) * 2 + 1));
	j = 0;
	while (min != max)
	{
		range[0][j] = min;
		min++;
		j++;
	}
	return (j);
}
