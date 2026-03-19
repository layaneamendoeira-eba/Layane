/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:50:23 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:29:02 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
 #include <stdio.h>

 int	main (void)
 {
 	printf("Teste com 'abc: %d\n", ft_str_is_uppercase("abc"));
 	printf("Teste com 'ABC: %d\n", ft_str_is_uppercase("ABC"));
 	printf("Teste com '123: %d\n", ft_str_is_uppercase("123"));
 	printf("Teste com '': %d\n", ft_str_is_uppercase(""));
 	return (0);
 }
