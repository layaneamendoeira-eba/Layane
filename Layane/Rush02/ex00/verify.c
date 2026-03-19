/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:32:18 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/14 18:03:02 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

void    ft_putstr(char *s)
{
    int position;

    position = 0;
    while (s[position] != '\0')
    {
        write(1, &s[position], 1);
        position++;
    }
}

int is_valid_number(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}

int valid_input(int argc, char **argv)
{
    if (argc < 2 || argc > 3)
        return (0);
    if (argc == 2)
        return (is_valid_number(argv[1]));
    return (is_valid_number(argv[2]));
}




