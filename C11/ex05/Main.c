/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:48:31 by abelache          #+#    #+#             */
/*   Updated: 2021/08/26 10:21:24 by abelache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		checkdiv(char **argv);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		modu(int a, int b);
int		multi(int a, int b);
int		div(int a, int b);
int		sous(int a, int b);
int		add(int a, int b);

int	main(int argc, char *argv[])
{
	int	(*ptr)(int, int);

	if (argc == 4 && checkdiv(argv))
	{
		if (argv[2][0] == '+')
			ptr = add;
		else if (argv[2][0] == '-')
			ptr = sous;
		else if (argv[2][0] == '/')
			ptr = div;
		else if (argv[2][0] == '*')
			ptr = multi;
		else if (argv[2][0] == '%')
			ptr = modu;
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
		ft_putnbr (ptr(ft_atoi(argv[1]), ft_atoi(argv[3])));
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		i = -nb;
		write (1, "-", 1);
	}
	else
		i = nb;
	while (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	print(i + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	ng;

	ng = 1;
	total = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ng = ng * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (ng * total);
	}
	return (0);
}

int	checkdiv(char **argv)
{
	if (argv [2][1])
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero.\n", 25);
		return (0);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero.\n", 23);
		return (0);
	}
	return (1);
}
