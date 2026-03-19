/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:53:27 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/13 15:14:49 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
 #include <stdio.h>
 int	main(void)
 {
 	char	source[] = "Teste 42";
 	char	destin[20];
 	ft_strncpy(destin, source, 2);
     printf("Base: %s \n", source);
     printf("Copy: %s", destin);
 	return (0);
 }
