/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:19:09 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 19:53:26 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}