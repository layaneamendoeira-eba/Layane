/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:38:03 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:21:52 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z')
			&& (!(str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}
 #include <stdio.h>

 int	main (void)
 {
 	printf("Teste com 'abCc': %d\n", ft_str_is_alpha("abCc"));
 	printf("Teste com 'A2c': %d\n", ft_str_is_alpha("A2c"));
 	printf("Teste com '123': %d\n", ft_str_is_alpha("123"));
 	printf("Teste com '': %d\n", ft_str_is_alpha(""));
 	return (0);
 }
