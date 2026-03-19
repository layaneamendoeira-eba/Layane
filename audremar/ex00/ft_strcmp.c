/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:40:28 by audremar          #+#    #+#             */
/*   Updated: 2026/03/18 13:33:03 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <unistd.h>
int	main(void)
{
	int teste;
	char c;

	char *s1 = "Testando";
	char *s2 = "TestAndo";
	teste = ft_strcmp(s1, s2);

	if (teste < 0)
	{
		write(1, "-", 1);
		teste = -teste;
	}

	if(s1 == s2)
	{
		write(1, "0", 1);
		return (0);
	}
	else {
		c = (teste / 10) + '0';
		write(1, &c, 1);

		c = (teste % 10) + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		return(0);
	}
}
