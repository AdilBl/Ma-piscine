/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:19:22 by abelache          #+#    #+#             */
/*   Updated: 2021/08/23 15:33:11 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	len_base(char i, char *base)
{
	int	j;

	j = 0;
	if (base[0] == '\0')
		return (1);
	while (base[j])
	{
		if (base[j] == i)
			return (1);
		j++;
	}
	return (0);
}

void	compteur1(char *str, char *base, char **split)
{
	int	i;
	int	j;
	int	k;
	int	tamp;

	tamp = 0;
	i = 0;
	k = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while ((!len_base(str[i++], base)))
		{
			j++;
		}
		if (j != 0)
		{
			split[k] = malloc(sizeof(char) * (j + 1));
			ft_strncpy(split[k], str + i - j - 1, j);
			k++;
		}
	}
	split[k] = NULL;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	compteur(char *str, char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while ((!len_base(str[i++], base)))
		{
			k++;
		}
		if (k != 0)
			j++;
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	if (charset[i] == '\0')
	{
		j = 0;
		split = malloc(sizeof(char *) * (1 + 1));
		while (str[j])
			j++;
		split[i] = malloc(sizeof(char) * (j + 1));
		ft_strncpy(split[i], str, j);
		split[1] = NULL;
		return (split);
	}
	split = malloc(sizeof(char *) * (compteur(str, charset) + 1));
	compteur1(str, charset, split);
	return (split);
}
