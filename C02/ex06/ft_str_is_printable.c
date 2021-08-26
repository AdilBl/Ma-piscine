/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:39:22 by abelache          #+#    #+#             */
/*   Updated: 2021/08/10 18:11:51 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	cpt;

	cpt = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cpt] != '\0')
	{
		if (!(str[cpt] > 31 && str[cpt] < 127))
		{
			return (0);
		}
		cpt ++;
	}
	return (1);
}
