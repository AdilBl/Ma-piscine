/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:59:07 by abelache          #+#    #+#             */
/*   Updated: 2021/08/26 12:15:37 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	j = ft_tablen(tab) - 1;
	i = 0;
	while (j-- != 0)
	{
		k = 0;
		while (k++ < j)
		{
			if (ft_strcmp(tab[k], tab[k + 1]) > 0)
			{
				tmp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = tmp;
			}
		}
	}
}
