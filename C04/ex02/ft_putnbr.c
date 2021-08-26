/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:55:56 by abelache          #+#    #+#             */
/*   Updated: 2021/08/16 15:23:03 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	print(char nb);

void	print(char nb)

{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		i = -nb;
		write (1, "-", 1);
	}
	else
		i = nb;
	while (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	print(i + '0');
}
