/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:13:13 by abelache          #+#    #+#             */
/*   Updated: 2021/08/18 14:10:31 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi_base(char *str, char *base);

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	c_str(unsigned char c, char *str, int v)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			n += 1;
		if (n == v)
			return (i);
		i++;
	}
	return (-1);
}

int	check_error(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || (c_str(base[i], base, 2) > 0)
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mi;
	int	n;
	int	l_base;

	i = 0;
	mi = 1;
	n = 0;
	l_base = len_str(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mi *= -1;
		i++;
	}
	if (check_error(base))
		return (0);
	while (c_str(str[i], base, 1) >= 0)
	{
		n = l_base * n + c_str(str[i], base, 1);
		i++;
	}
	return (mi * n);
}
