/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:35:52 by abelache          #+#    #+#             */
/*   Updated: 2021/08/15 18:11:25 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_s;
	unsigned int	len_d;
	unsigned int	i;
	unsigned int	dist;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	i = 0;
	while (i < size && dest[i])
		i++;
	dist = i;
	if (size < len_d || size == 0)
		return (len_s + size);
	if (len_d < size)
	{
		i = 0;
		while ((i < size - len_d - 1) && src[i])
		{
			dest[len_d + i] = src[i];
			i++;
		}
	}
	if (i > 0)
		dest[len_d + i] = '\0';
	return (len_s + dist);
}
