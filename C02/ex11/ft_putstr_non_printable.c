/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:36:42 by abelache          #+#    #+#             */
/*   Updated: 2021/08/10 03:41:06 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	Conditions(unsigned char c)
{
	char	*Bi;
	int		h1;
	int		h2;

	Bi = "0123456789abcdef";
	if (c < 32 || c > 126)
	{	
		h1 = c / 16;
		h2 = c % 16;
		h1 = Bi[h1];
		h2 = Bi[h2];
		write (1, "\\", 1);
		write (1, &h1, 1);
		write (1, &h2, 1);
	}	
	else
	{
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		Conditions(str[cpt]);
		cpt++;
	}
}
