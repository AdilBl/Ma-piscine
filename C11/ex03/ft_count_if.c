/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:24:26 by abelache          #+#    #+#             */
/*   Updated: 2021/08/26 17:27:32 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	j;

	length++;
	j = 0;
	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) != 0)
			j++;
	}
	return (j);
}
