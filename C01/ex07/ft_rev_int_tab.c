/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:09:32 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 03:40:05 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;

	p = 0;
	while (p < size / 2)
	{
		ft_swap(&tab[p], &tab[size - 1 - p]);
		p++;
	}
}
