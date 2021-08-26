/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:37:11 by alakhdar          #+#    #+#             */
/*   Updated: 2021/08/22 15:39:03 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_reader(char	*str)
{
	int		fd;
	char	buffer[9999];
	int		size;
	char	*number;
	int		i;

	fd = open("dict.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	size = read(fd, buffer, 9999);
	buffer[size] = 0;
	number = malloc(size * sizeof(number) + 1);
	ft_strcpy(number, ft_strstr(buffer, str));
	ft_putstr(number);
	i = 0;
	while (number[i] != '\n')
	{
		if ((number[i] >= '0' && number[i] <= '9') || (number[i] == ':')
			|| (number[i] == ' '))
			i++;
		else
		{
			i++;
		}
	}
	close(fd);
	return (*buffer);
}
