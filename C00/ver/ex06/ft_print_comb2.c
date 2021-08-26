/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:07:11 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 15:32:11 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);
void	print(char ad, char bd, char au, char bu);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a / 10 + '0', b / 10 + '0', a % 10 + '0', b % 10 + '0');
			b++;
		}
		a++;
	}
}	

void	print(char ad, char bd, char au, char bu)
{
	write(1, &ad, 1);
	write(1, &au, 1);
	write(1, " ", 1);
	write(1, &bd, 1);
	write(1, &bu, 1);
	if (!(ad == '9' && au == '8'))
	{
		write(1, ", ", 2);
	}
}
