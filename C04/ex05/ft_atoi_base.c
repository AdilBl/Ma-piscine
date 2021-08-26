/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:23:35 by abelache          #+#    #+#             */
/*   Updated: 2021/08/17 11:57:46 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	len_base(char i, char *base)
{
	int	j;

	j = 0;
	while (base[j] != i)
		j++;
	return (j);
}

int	check(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] > 8 && base[i] < 14) || (base[i] == 32))
			return (1);
		if (base[i] == 43 || base[i] == 45)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	total;
	int	ng;

	ng = 1;
	total = 0;
	i = 0;
	if (check_base(base))
		return (0);
	while (str[i++])
	{
		while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
			i++;
		while (str[i] == 43 || str[i] == 45)
			if (str[i++] == 45)
				ng = ng * -1;
		while (check(str[i], base))
		{
			total = total * len(base) + len_base(str[i++], base);
			if (!(check(str[i], base)))
				return (ng * total);
		}
		return (0);
	}
	return (0);
}
