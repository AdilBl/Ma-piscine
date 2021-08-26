/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:54:33 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 00:38:08 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock1;
	int	stock2;

	stock1 = *a;
	stock2 = *b;
	*a = stock1 / stock2;
	*b = stock1 % stock2;
}
