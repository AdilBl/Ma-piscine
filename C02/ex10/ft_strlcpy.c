/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:47:53 by abelache          #+#    #+#             */
/*   Updated: 2021/08/11 08:42:08 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cpt;
	unsigned int	lg;

	lg = 0;
	cpt = 0;
	while (src[lg])
		lg ++;
	if (size < 1)
	{
		return (lg);
	}
	while (src[cpt] != '\0' && cpt < size - 1)
	{
		dest[cpt] = src [cpt];
		cpt ++;
	}
	dest[cpt] = '\0';
	return (lg);
}
