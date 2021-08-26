/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:50:58 by abelache          #+#    #+#             */
/*   Updated: 2021/08/12 09:57:33 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	int				nel;
	unsigned int	i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	nel = len;
	while (src [len - nel] != '\0' && i != nb)
	{
		dest[len] = src [len - nel];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
