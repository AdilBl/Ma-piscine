/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:58:09 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 14:56:30 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
char	ft_putnbr_base(int nbr, char *base, char *conv);
int		ft_len_base(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		so;
	char	*conv;

	if (ft_len_base(base_from) != 0 && ft_len_base (base_to) != 0)
	{
		conv = malloc(sizeof(char) * 34);
		so = ft_atoi_base(nbr, base_from);
		ft_putnbr_base(so, base_to, conv);
		return (conv);
	}
	return (0);
}

int	ft_len_base(char *base)
{
	int	a;

	a = 0;
	while (base[a])
		a++;
	return (a);
}

int	check(char *base, char c)
{
	int	t;
	int	i;

	t = 0;
	i = 0;
	while (base[i++])
	{
		if (c == base[i])
			t++;
	}
	if (t > 1)
		return (0);
	t = 0;
	return (1);
}

void	recur(long int k, int len_base, char *base, char *conv)
{
	int		i;
	int		ko;
	char	l[34];

	i = 0;
	ko = 0;
	if (k < 0)
	{
		conv[i++] = '-';
		k = -k;
	}
	while (k != 0)
	{
		l[ko++] = base[k % len_base];
		k = k / len_base;
	}
	while (ko > 0)
	{
		ko--;
		conv[i] = l[ko];
		i++;
	}
	conv[i] = '\0';
}

char	ft_putnbr_base(int nbr, char *base, char *conv)
{
	int			i;
	int			len_base;
	int			j;
	long int	k;

	i = 0;
	j = 0;
	len_base = ft_len_base(base);
	while (base[i])
	{
		j = check(base, base[i]);
		if (j == 0)
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] == '\0'
			|| len_base <= 1)
			return (0);
		i++;
	}
	k = nbr;
	recur(k, len_base, base, conv);
	return (*conv);
}
