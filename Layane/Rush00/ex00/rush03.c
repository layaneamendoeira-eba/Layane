/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviniciu <rviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 20:16:52 by rviniciu          #+#    #+#             */
/*   Updated: 2026/02/27 20:17:20 by rviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int n)
{
	int	a;
	int	b;

	a = 0;
	b = n -2;
	ft_putchar('A');
	while (a < b)
	{
		ft_putchar('B');
		a++;
	}
	if (n > 1)
	{
		ft_putchar('C');
	}
	putchar('\n');
}

void	rush_mid(int x, int y)
{
	int	qtdesp;
	int	c;
	int	t;

	qtdesp = x - 2;
	c = 0;
	while (c < y - 2)
	{
		putchar('B');
		t = 0;
		while (t < qtdesp)
		{
			putchar(' ');
			t++;
		}
		if (y != 1 && x != 1 && x > 1)
		{
			putchar('B');
		}
		putchar('\n');
		c++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "insira um valor valido (inteiro maior que zero)", 47);
		return ;
	}
	rush_line(x);
	rush_mid(x, y);
	if (y > 1)
	{
		rush_line(x);
	}
	putchar('\n');
}
