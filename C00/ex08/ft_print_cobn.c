/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cobn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:51:46 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 13:03:00 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	print(char nb);

void	ft_print_combn(int n)
{
	int m;
	int ct;
	int cd;
	cd = 0;
	ct = 0;
	m = 1;
	while (n != ct)
	{
		m = m * 10;
		ct++;
	}
	n = n * m;
	while (n-1 != cd)
	{
		cd ++;
		print (cd + '0');
	}
}

void	print(char nb)
{
	write(1, &nb ,1);
}


int main ()
{
	ft_print_combn(3);
}
