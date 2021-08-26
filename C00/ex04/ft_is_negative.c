/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:04:56 by abelache          #+#    #+#             */
/*   Updated: 2021/08/05 15:02:04 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}