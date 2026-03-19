/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:06:40 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:24:16 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
#include	<stdio.h>

int	main(void)
{
	printf("Resultado para '1234': %d\n", ft_str_is_numeric("1234"));
	printf("Resultado para '12a34': %d\n", ft_str_is_numeric("12a34"));
	printf("Resultado para 'ABC': %d\n", ft_str_is_numeric("ABC"));
	printf("Resultado para '': %d\n", ft_str_is_numeric(""));
	return (0);
}
