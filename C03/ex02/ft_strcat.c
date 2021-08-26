/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:30:38 by abelache          #+#    #+#             */
/*   Updated: 2021/08/12 09:56:51 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	nel;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	nel = len;
	while (src[len - nel] != '\0')
	{
		dest[len] = src [len - nel];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
