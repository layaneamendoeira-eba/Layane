/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:59:36 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/17 21:18:34 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_div;
	int	b_mod;

	a_div = *a / *b;
	b_mod = *a % *b;
	*a = a_div;
	*b = b_mod;
}

/* int main(void)
{
	int	a
	int	b

	a = 9;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	write (1, &"0123456789"[a], 1);
	write (1, &"0123456789"[b], 1);
	return(0);
} */
