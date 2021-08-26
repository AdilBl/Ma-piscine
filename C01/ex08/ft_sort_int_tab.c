/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:14:30 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 03:46:59 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	po;
	int	max;

	max = size - 1;
	i = 0;
	po = 1;
	while (i != max)
	{
		if (tab[i] > tab[po])
		{
			ft_swap(&tab[i], &tab[po]);
			i = 0;
			po = 1;
		}
		i++;
		po++;
		if (tab[0] > tab[1])
		{
			ft_swap(&tab[0], &tab[1]);
		}
	}
}
