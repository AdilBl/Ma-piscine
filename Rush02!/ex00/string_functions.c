/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:48:36 by alakhdar          #+#    #+#             */
/*   Updated: 2021/08/22 11:22:42 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "lib.h"

int	ft_strlen(char	*str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i + 1 < n))
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	length_to_find;

	length_to_find = ft_strlen(to_find);
	i = 0;
	if (length_to_find == 0)
	{
		return (str);
	}
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, length_to_find) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	lenght;

	lenght = 0;
	while (src[lenght])
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = src[lenght];
	return (dest);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != ' ')
		str++;
	str++;
	while (str[n] != '\n' && str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, " ", 1);
}
