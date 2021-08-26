/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:39:38 by alakhdar          #+#    #+#             */
/*   Updated: 2021/08/22 15:38:29 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	nombre(int nb)
{
	if (nb != 0)
	{
		if (nb / 100 == 0 && nb / 10 == 0)
			unite(nb % 10);
		if (nb / 100 == 0)
		{
			if (nb < 20)
				dizaine(nb % 100);
			else
			{
				dizaine(nb % 100);
				unite(nb % 10);
			}
		}
		if (nb / 100 != 0)
		{
			centaine(nb);
			if (nb % 100 != 0)
			{
				dizaine(nb % 100);
			if (nb % 10 != 0)
				unite(nb % 10);
			}
		}
	}
}

void	big(int n, int nb)
{
	int		t;
	int		i;
	char	*re;
	if (nb != 0)
	{
		i = 0;
		t = n  * 3;
		re = malloc(sizeof(char) * t + 2);
		re[i++] = '1';
		while (i != t + 1)
		{
			re[i++] = '0';
		}
		re[i] = '\0';
		ft_reader(re);
	}
}

void	centaine(int nb)
{
	char	centaine[4];
	int		i;

	unite(nb / 100);
	i = 0;
	centaine[i++] = '1';
	centaine[i++] = '0';
	centaine[i++] = '0';
	centaine[i] = '\0';
	ft_reader(centaine);
	reset_malloc(centaine,4);
}

void	dizaine(int nb)
{
	char	dizaine[3];
	int		i;

	i = 0;
	if (nb < 20)
	{
		dizaine[i++] = nb / 10 + '0';
		dizaine[i] = nb % 10+ '0';
	}
	else
	{
		dizaine[i++] = nb / 10 + '0';
		dizaine[i] = '0';
	}
	ft_reader(dizaine);
}

void	unite(int nb)
{
	char	unite[2];

	unite[0] = nb + '0';
	unite[1] = '\0';
	
	ft_reader(unite);
}

int	len_n(char *str)
{
	int	i;	
	int	n;

	n = 0;
	i = 0;
	while (str[i] == ' ' && str[i])
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n++;
		i++;
	}
	return (n);
}

void	checkstart(int tabd, int j)
{
	if (j % 3 != 0)
	{
		if (j % 3 == 2)
			dizaine(tabd / 10);
		else
			unite(tabd / 100);
	}
	if(j % 3 == 0)
		centaine(tabd);
}
