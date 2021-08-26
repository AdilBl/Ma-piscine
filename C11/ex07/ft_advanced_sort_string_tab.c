/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:35:16 by abelache          #+#    #+#             */
/*   Updated: 2021/08/26 14:00:19 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char*, char*))
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
			if (cmp(tab[k], tab[k + 1]) > 0)
			{
				tmp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = tmp;
			}
		}
	}
}
