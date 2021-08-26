/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:21:36 by abelache          #+#    #+#             */
/*   Updated: 2021/08/15 19:22:09 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int		init_tab(int *flags);
int		print_tab(int tab[4][4], int *flags);
void	print_nb(int tab[4][4]);
void	print_nb(int tab[4][4]);

int	value_checker(char *arg, int *flags)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (arg[a])
	{
		if (arg[0] == ' ' || (arg[31] == ' '))
			return (0);
		if ((arg[a] >= '1' && arg[a] <= '4') && ((arg[a + 1] == ' ')
				|| (!((arg[a + 1])) && (arg[a - 1] == ' '))))
		{
			flags[b] = (arg[a] - '0');
			b++;
			a++;
		}
		if (arg[a] == 32 && ((arg[a - 1] >= '1' && arg[a - 1] <= '4')
				&& (arg[a + 1] >= '1' && arg[a + 1] <= '4')))
			a++;
		else
			return (b);
	}
	return (b);
}

int	init_tab(int *flags)
{
	int	tab[4][4];
	int	col;
	int	row;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			tab[row][col] = 0;
			col++;
		}
		row++;
	}
	if (print_tab(tab, flags))
		print_nb(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}

void	print_nb(int tab[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			ft_putchar(tab[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	flags[16];
	int	a;

	a = 0;
	if (argc == 2)
	{
		a = value_checker(argv[1], flags);
		if (a == 16)
			init_tab(flags);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
