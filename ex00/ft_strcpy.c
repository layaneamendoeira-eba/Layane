/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:39:09 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:10:28 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
 #include <stdio.h>

 int	main(void)
 {
 	char	source[] = "Oi, tudo bem";
 	char	destin[20];

 	ft_strcpy(destin, source);
 	printf("Conteudo da origem: %s\n", source);
 	printf("Conteudo do destino: %s", destin);
 	return (0);
 }
