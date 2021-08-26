/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:04:36 by abelache          #+#    #+#             */
/*   Updated: 2021/08/08 08:38:30 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	cpt ;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] >= 'a' && str[cpt] <= 'z')
		{
			str[cpt] -= 32;
		}
		cpt++;
	}
	return (str);
}
