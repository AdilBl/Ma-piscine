/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:51:53 by lpayet-p          #+#    #+#             */
/*   Updated: 2021/08/07 12:06:14 by abelache         ###   ########lyon.fr   */
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
		if (x == 0 && (y == 0 || y == w - 1))
		{
			ft_putchar('A');
			return ;
		}
		else if (x == w - 1 && (y == w - 1 || y == 0))
		{
			ft_putchar('C');
			return ;
		}
		else
			ft_putchar('B');
	}
	return ;
}

void	rush(int x, int y)
{
	int		current_x;
	int		current_y;

	current_y = 0;
	while (current_y < y)
	{
		current_x = 0;
		while (current_x < x)
		{
			ft_print_block(current_x, current_y, x, y);
			current_x++;
		}
		ft_putchar('\n');
		current_y++;
	}
	return ;
}
