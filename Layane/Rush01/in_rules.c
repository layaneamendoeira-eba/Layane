/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaique- <acaique-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:09:54 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/08 16:40:08 by acaique-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rule.h"
#include <stdio.h>
#include <unistd.h>

void in_matriz(int g_matriz_number[6][6], char *str)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        g_matriz_number[0][i + 1] = str[i * 2] - '0';
        i++;
    }
    i = 0;
    while (i < 4)
    {
        g_matriz_number[5][i + 1] = str[(i + 4) * 2] - '0';
        i++;
    }
    i = 0;
    while (i < 4)
    {
        g_matriz_number[i + 1][0] = str[(i + 8) * 2] - '0';
        i++;
    }
    i = 0;
    while (i < 4)
    {
        g_matriz_number[i + 1][5] = str[(i + 12) * 2] - '0';
        i++;
    }
}
