/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:35:50 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/17 21:08:29 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	first_a;

	first_a = *a;
	*a = *b;
	*b = first_a;
}

/*  #include <unistd.h>
int main(void)
{
	int numb1;
	int numb2;
	char nbr1;
	char nbr2;

	numb1 = 1;
	numb2 = 2;

	ft_swap(&numb1, &numb2);
	nbr1 = numb1 + '0';
    nbr2 = numb2 + '0';
	write(1, &nbr1, 1);
	write(1, &nbr2, 1);
	return(0);
} */
