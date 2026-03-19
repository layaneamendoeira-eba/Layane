/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:38:03 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:26:14 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		index++;
	}
	return (1);
}
 #include <stdio.h>

 int	main (void)
 {
 	printf("Teste com 'abc': %d\n", ft_str_is_lowercase("abc"));
 	printf("Teste com 'Abc': %d\n", ft_str_is_lowercase("Abc"));
 	printf("Teste com '123': %d\n", ft_str_is_lowercase("123"));
 	printf("Teste com '': %d\n", ft_str_is_lowercase(""));
 	return (0);
 }
