/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:49:22 by abelache          #+#    #+#             */
/*   Updated: 2021/08/15 17:56:04 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	j = argc - 1;
	i = 1;
	while (j-- != 0)
	{
		k = 0;
		while (k++ < j)
		{
			if (ft_strcmp(argv[k], argv[k + 1]) > 0)
			{
				tmp = argv[k];
				argv[k] = argv[k + 1];
				argv[k + 1] = tmp;
			}
		}
	}
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
