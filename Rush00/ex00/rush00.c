/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:51:53 by lpayet-p          #+#    #+#             */
/*   Updated: 2021/08/07 11:11:16 by lpayet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_block(int x, int y, int w, int h)
{
	if ((x > 0 && x < w - 1) && (y > 0 && y < h - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		if ((x > 0 && x < w - 1) && (y == 0 || y == h - 1))
		{
			ft_putchar('-');
			return ;
		}
		if ((y > 0 && y < h - 1) && (x == 0 || x == w - 1))
		{
			ft_putchar('|');
			return ;
		}
		else
			ft_putchar('o');
	}
	return ;
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_print_block(j, i, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return ;
}
