/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:25:30 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:38:36 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
 #include <stdio.h>

 int	main (void)
 {
 	char teste1[] = "ABC";
 	char teste2[] = "Oi, Tudo Bem?";
 	char teste3[] = "oi tudo bem 123";
 
 	printf("Teste com 'ABC': %s\n", ft_strlowcase(teste1));
 	printf("Teste com 'Oi, Tudo Bem?': %s\n", ft_strlowcase(teste2));
 	printf("Teste com 'oi tudo bem 123': %s\n", ft_strlowcase(teste3));
 	return (0);
 }
