/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:18:51 by abelache          #+#    #+#             */
/*   Updated: 2021/08/22 15:39:34 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	reset_malloc(char *str, int count)
{
	int	i;

	i = 0;
	while (count > i)
	{
		str[i] = '\0';
		i++;
	}
}

int	check(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		if ((str[i + 1] && str[i + 1] == ' ')
			|| (str[i + 1] >= '0' && str[i + 1] <= '9'))
			i++;
		else
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((str[i + 1] && str[i + 1] == ' ')
			|| (str[i + 1] >= '0' && str[i + 1] <= '9'))
			i++;
		else
			return (0);
	}
	while (str[i++] == ' ')
	{
		if (str[i] && str[i] != ' ')
			return (0);
	}
	return (1);
}

int	len_nb(char *str)
{
	int	i;	
	int	n;
	int	j;

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
	j = n % 3;
	n = n / 3;
	if (j == 0)
		return (n);
	return (n + 1);
}

void	*ft_atoi_tab_3(char *str, int *tab)
{
	int	i;
	int	total;
	int	j;
	int	n;
	int	k;

	k = 0;
	total = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	j = len_nb(str) + 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = 0;
		n = 0;
		while (n != 3 && j != 0 && str[i] && str[i] >= '0' && str[i] <= '9')
		{
			total = total * 10 + (str[i++] - '0');
			n++;
		}
		tab[k] = total;
		j--;
		k++;
	}
	return (0);
}

int	main(void)
{
	int		i;
	int		*tab;
	char	*str = "10000000000000000000000000000000000000";
	int		k;
	int		r;
	int		j;

	j = len_n(str);
	if (check(str))
		printf("oui");
	k = len_nb(str);
	tab = malloc(sizeof(int *) * (k));
	i = 0;
	ft_atoi_tab_3(str, tab);
	checkstart(tab[i],j);
	big(k - 1,tab[i++]);
	k--;
	while (k != 0)
	{
		r = tab[i];
		nombre(tab[i]);
		if (k != 1)
			big(k - 1,tab[i++]);
				k--;	
	}	
	free(tab);
}
