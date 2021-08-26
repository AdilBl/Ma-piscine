/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:30:13 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 14:33:13 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	cpt;

	cpt = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cpt] != '\0')
	{
		if (!(str[cpt] >= 'A' && str[cpt] <= 'Z'))
		{
			return (0);
		}
		cpt ++;
	}
	return (1);
}
