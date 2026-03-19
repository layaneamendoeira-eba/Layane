/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:36:41 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:36:59 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
 #include <stdio.h>

 int	main (void)
 {
 	char teste1[] = "abc";
 	char teste2[] = "Oi, Tudo Bem?";
 	char teste3[] = "OI TUDO BEM 123";
	
 	printf("Teste com 'abc': %s\n", ft_strupcase(teste1));
 	printf("Teste com 'Oi, Tudo Bem?': %s\n", ft_strupcase(teste2));
 	printf("Teste com 'OI TUDO BEM 123': %s\n", ft_strupcase(teste3));
 	return (0);
 }
