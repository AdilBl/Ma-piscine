/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:24:37 by abelache          #+#    #+#             */
/*   Updated: 2021/08/08 14:28:44 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	cpt;

	cpt = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cpt] != '\0')
	{
		if ((!(str[cpt] >= 'a' && str[cpt] <= 'z'))
			&& (!(str[cpt] >= 'A' && str[cpt] <= 'Z')))
		{
			return (0);
		}
		cpt ++;
	}
	return (1);
}
