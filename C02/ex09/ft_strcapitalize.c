/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:30:17 by abelache          #+#    #+#             */
/*   Updated: 2021/08/12 13:30:42 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	upercase(char car_up)
{
	if (car_up >= 'a' && car_up <= 'z')
	{
		car_up = car_up - 32;
		return (car_up);
	}
	return (car_up);
}

char	lowercase(char car_lo)
{
	if (car_lo >= 'A' && car_lo <= 'Z')
	{
		car_lo = car_lo + 32;
		return (car_lo);
	}
	return (car_lo);
}

char	transform(char c, char c2, int i)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		if ((c2 >= 'A' && c2 <= 'Z') || (c2 >= 'a' && c2 <= 'z'))
			c = lowercase(c);
		else if (c2 >= '0' && c2 <= '9')
			c = lowercase(c);
		else if (i == 0)
			c = upercase(c);
		else
			c = upercase(c);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		str[i] = transform(str[i], str[i - 1], i);
		++i;
	}
	return (str);
}
