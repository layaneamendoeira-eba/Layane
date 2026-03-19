/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:07:31 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:31:44 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
 #include <stdio.h>

 int	main (void)
 {
 	printf("Teste com 'abc': %d\n", ft_str_is_printable("abc"));
 	printf("Teste com '\\n': %d\n", ft_str_is_printable("\n"));
 	printf("Teste com '': %d\n", ft_str_is_printable(""));
 	return (0);
 }
