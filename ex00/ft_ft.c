/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:41:03 by hvanique          #+#    #+#             */
/*   Updated: 2026/03/11 13:22:38 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	char	resultado[3];

	resultado[0] = '4';
	resultado[1] = '2';
	resultado[2] = '\n';

	write(1, resultado, 3);
	return (0);
}
