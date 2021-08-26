/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 07:47:17 by abelache          #+#    #+#             */
/*   Updated: 2021/08/17 09:41:03 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putnbr_base(int nbr, char *base);

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

void	recur(long int k, int len_base, char *base, int a)
{
	if (k < 0 && a == 0 && len_base > 0)
	{
		write(1, "-", 1);
		k = -k;
	}
	if (k >= 0 && k < len_base && a == 0)
	{
		write(1, &base[k], 1);
	}
	else
	{
		if (a == 0 && len_base > 0)
		{
			ft_putnbr_base(k / len_base, base);
			ft_putnbr_base(k % len_base, base);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			len_base;
	int			j;
	long int	k;
	int			a;

	i = 0;
	j = 0;
	a = 0;
	len_base = ft_len_base(base);
	while (base[i])
	{
		j = check(base, base[i]);
		if (j == 0)
			a = 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\0'
			|| len_base <= 1)
			a = 1;
		i++;
	}
	k = nbr;
	recur(k, len_base, base, a);
}
