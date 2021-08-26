/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:06:49 by abelache          #+#    #+#             */
/*   Updated: 2021/08/07 17:11:46 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	cpt ;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] >= 'A' && str[cpt] <= 'Z')
		{
			str[cpt] += 32;
		}
		cpt++;
	}
	return (str);
}
