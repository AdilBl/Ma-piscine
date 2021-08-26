/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:46:03 by lbensimo          #+#    #+#             */
/*   Updated: 2021/08/15 23:38:36 by lbensimo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_flags(int tab[4][4], int *flags);

int	find_zero(int tab[4][4], int *row, int *col)
{
	*row = 0;
	while (*row <= 3)
	{
		*col = 0;
		while (*col <= 3)
		{
			if (!(tab[*row][*col]))
				return (0);
			*col += 1;
		}
		*row += 1;
	}
	return (1);
}

int	col_checker(int tab[4][4], int col, int b)
{
	int	row;

	row = 0;
	while (row <= 3)
	{
		if (tab[row][col] == b)
			return (0);
		row++;
	}
	return (1);
}

int	row_checker(int tab[4][4], int row, int b)
{
	int	col;

	col = 0;
	while (col <= 3)
	{
		if (tab[row][col] == b)
			return (0);
		col++;
	}
	return (1);
}

int	check_clone(int tab[4][4], int row, int col, int b)
{
	if ((row_checker(tab, row, b)) && (col_checker(tab, col, b))
		&& (!(tab[row][col])))
		return (1);
	return (0);
}

int	print_tab(int tab[4][4], int *flags)
{
	int	a;
	int	b;
	int	row;
	int	col;

	a = 0;
	if (find_zero(tab, &row, &col) && (check_flags(tab, flags)))
		return (1);
	b = 1;
	while (b <= 4)
	{
		if (check_clone(tab, row, col, b))
		{
			tab[row][col] = b;
			if (print_tab(tab, flags))
				return (1);
			tab[row][col] = 0;
		}
		b++;
	}
	return (0);
}
