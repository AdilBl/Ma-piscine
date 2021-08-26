/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:32:23 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 15:40:18 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	len(char *r)
{
	int	i;

	i = 0;
	while (r[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	nel;

	len = 0;
	while (dest[len])
		len++;
	nel = len;
	while (src[len - nel] != '\0')
	{
		dest[len] = src [len - nel];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int	cpt(char *strs)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (strs[j] != '\0')
	{
		j++;
		k++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*re;
	int		i;
	int		k;

	k = 0;
	i = 0;
	if (size == 0)
	{
		re = malloc(1);
		re[0] = '\0';
		return (re);
	}
	while (i < size)
		k += cpt(strs[i++]);
	i = 0;
	re = malloc(sizeof(*re) * (k +(len(sep) * size - 1)));
	re[0] = '\0';
	while (i < size)
	{
		ft_strcat(re, strs[i++]);
		if (i < size)
			ft_strcat(re, sep);
	}
	return (re);
}
