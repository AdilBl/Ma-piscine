/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:31:34 by abelache          #+#    #+#             */
/*   Updated: 2021/08/26 14:43:11 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	b;
	int	j;

	j = 0;
	b = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			b++;
		if (f(tab[i], tab[i + 1]) <= 0)
			j++;
		i++;
	}
	if (b == length - 1 || j == length - 1)
		return (1);
	else
		return (0);
}
