/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruvauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:51:11 by ruvauzel          #+#    #+#             */
/*   Updated: 2021/08/15 08:40:30 by ruvauzel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	up_col(int tab[4][4], int flag, int col)
{
	int	a;
	int	b;
	int	temp;

	a = 1;
	b = 1;
	temp = tab[0][col];
	while (a <= 3)
	{
		if (tab[a][col] > temp)
		{
			temp = tab[a][col];
			b++;
		}
		a++;
	}
	if (b == flag)
		return (0);
	return (1);
}

int	down_col(int tab[4][4], int flag, int col)
{
	int	a;
	int	b;
	int	temp;

	a = 2;
	b = 1;
	temp = tab[3][col];
	while (a >= 0)
	{
		if (tab[a][col] > temp)
		{
			temp = tab[a][col];
			b++;
		}
		a--;
	}
	if (b == flag)
		return (0);
	return (1);
}

int	left_row(int tab[4][4], int flag, int row)
{
	int	a;
	int	b;
	int	temp;

	a = 1;
	b = 1;
	temp = tab[row][0];
	while (a <= 3)
	{
		if (tab[row][a] > temp)
		{
			temp = tab[row][a];
			b++;
		}
		a++;
	}
	if (b == flag)
		return (0);
	return (1);
}

int	right_row(int tab[4][4], int flag, int row)
{
	int	a;
	int	b;
	int	temp;

	a = 2;
	b = 1;
	temp = tab[row][3];
	while (a >= 0)
	{
		if (tab[row][a] > temp)
		{
			temp = tab[row][a];
			b++;
		}
		a--;
	}
	if (b == flag)
		return (0);
	return (1);
}

int	check_flags(int tab[4][4], int *flags)
{
	int	a;

	a = 0;
	while (flags[a])
	{
		if (a >= 0 && a <= 3)
			if (up_col(tab, flags[a], a))
				return (0);
		if (a >= 4 && a <= 7)
			if (down_col(tab, flags[a], a - 4))
				return (0);
		if (a >= 8 && a <= 11)
			if (left_row(tab, flags[a], a - 8))
				return (0);
		if (a >= 12 && a <= 15)
			if (right_row(tab, flags[a], a - 12))
				return (0);
		a++;
	}
	return (1);
}
