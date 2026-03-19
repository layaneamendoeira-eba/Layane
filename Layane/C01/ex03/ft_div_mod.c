/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:50:15 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/17 21:09:51 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <unistd.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	char c_div;
	char c_mod;

	a = 12;
	b = 2;
	div = a / b;
	mod = a %b;
	ft_div_mod(a, b, &div, &mod);
	c_div = div + '0';
	c_mod = mod + '0';
	write (1, &div, 1);
	write (1, &mod, 1);
	return(0);
} */
