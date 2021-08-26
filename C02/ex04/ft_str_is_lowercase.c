/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:54:10 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 14:25:14 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	cpt;

	cpt = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cpt] != '\0')
	{
		if (!(str[cpt] >= 'a' && str[cpt] <= 'z'))
		{
			return (0);
		}
		cpt ++;
	}
	return (1);
}
