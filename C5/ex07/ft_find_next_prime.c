/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:29:34 by abelache          #+#    #+#             */
/*   Updated: 2021/08/20 12:03:48 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	if (nb == 1 || nb == 0)
		return (0);
	while (n < nb && i < 46341)
	{
		n = i * i;
		i++;
	}
	if (n == nb)
		return (i - 1);
	return (i + 1);
}

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	n = ft_sqrt(nb);
	while (n > 1)
	{
		if (nb % n == 0)
			return (0);
		n--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
