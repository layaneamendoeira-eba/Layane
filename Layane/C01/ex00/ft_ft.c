/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:21:03 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/18 18:57:58 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include	<unistd.h>

int	main(void)
{
	int	test;

	test = 5;
	ft_ft(&test);
	char	d;
	char	u;

	d = test / 10 + '0';
	u = test % 10 + '0';
	write(1, &d, 1);
	write(1, &u, 1);
	return (0);
}
