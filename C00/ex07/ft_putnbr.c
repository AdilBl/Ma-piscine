/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:57:02 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 14:38:23 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	print(char nb);
void	verifie(int n);
int		ini(int nb, int count, int cout, int div);

void	print(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int	po;
	int	div;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 9)
	{
		po = nb;
		div = 1;
		while (po > 9)
		{
			po = po / 10;
			div = div * 10;
		}
		print (po + '0');
		nb = nb % div;
	}
	print (nb + '0');
}

void	verifie(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
}
