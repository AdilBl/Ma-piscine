/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:43:02 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 18:28:44 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char v1, char v2, char v3);

void	ft_print_comb(void)
{
	int	v1;
	int	v2;
	int	v3;

	v1 = 0;
	v2 = 1;
	v3 = 2;
	while (v1 <= 7)
	{
		while (v2 <= 8)
		{
			while (v3 <= 9)
			{
				ft_putchar(v1 + 48, v2 + 48, v3 + 48);
				v3++;
			}
			v2++;
			v3 = v2 + 1;
		}
		v1++;
		v2 = v1 + 1;
		v3 = v2 + 1;
	}
}

void	ft_putchar(char v1, char v2, char v3)
{
	write(1, &v1, 1);
	write(1, &v2, 1);
	write(1, &v3, 1);
	if (v1 != '7')
		write(1, ", ", 2);
}
