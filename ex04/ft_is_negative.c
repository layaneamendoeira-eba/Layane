/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:57:22 by lkaue-fa          #+#    #+#             */
/*   Updated: 2026/03/05 14:25:40 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	x;
	char	p;

	x = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(0);
	ft_is_negative(-7);
}

