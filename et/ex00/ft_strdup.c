/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:13:08 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 09:51:38 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src);

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
