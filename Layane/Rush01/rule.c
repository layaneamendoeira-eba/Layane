/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaique- <acaique-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 09:06:18 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/08 17:28:32 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rule.h"
#include <stdio.h>
#include <unistd.h>

void	validation_one_solo(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (g_matriz_number[i][j] == 1)
			{
				if (i == 0)
					g_matriz_number[i + 1][j] = 4;
				if (i == 5)
					g_matriz_number[i - 1][j] = 4;
				if (j == 0)
					g_matriz_number[i][j + 1] = 4;
				if (j == 5)
					g_matriz_number[i][j - 1] = 4;
			}
			j++;
		}
		i++;
	}
}

void	validation_four_solo(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (g_matriz_number[i][j] == 4)
			{
				k = 1;
				while (k <= 4)
				{
					if (i == 0)
					g_matriz_number[i + k][j] = k;
					if (i == 5)
					g_matriz_number[i - k][j] = k;
					if (j == 0)
					g_matriz_number[i][j + k] = k;
					if (j == 5)
					g_matriz_number[i][j - k] = k;
					k++;
				}
			}
			j++;
		}
		i++;
	}
}

// 	// // validacao 2 - linha 3*2 - 2*3
void	validation_line_tree_two(void)
{
	int	count_line;

	count_line = 0;
	while (count_line < 6)
	{
		if (g_matriz_number[count_line][0] == 2 && g_matriz_number[count_line][5] == 3)
		{
			g_matriz_number[count_line][2] = 4;
		}	
		else if (g_matriz_number[count_line][0] == 3 && g_matriz_number[count_line][5] == 2)
		{
			g_matriz_number[count_line][3] = 4;
		}
		count_line++;
	}
}

// 	// validacao 2 - coluna 2*3 - 3*2
void	validation_column_tree_two(void)
{
	int	count_column;

	count_column = 0;
	while (count_column < 6)
	{
		if (g_matriz_number[0][count_column] == 3 && g_matriz_number[5][count_column] == 2)
		{
			g_matriz_number[3][count_column] = 4;
		}
		else if (g_matriz_number[0][count_column] == 2 && g_matriz_number[5][count_column] == 3)
		{
			g_matriz_number[2][count_column] = 4;
		}
		count_column++;
	}
}

//validacao 1 - linha 1*2 - 2*1
void	validation_line_one_two(void)
{
	int	count_line;

	count_line = 0;
	while (count_line < 6)
	{
		if (g_matriz_number[count_line][0] == 1 && g_matriz_number[count_line][5] == 2)
		{
			g_matriz_number[count_line][4] = 3;
		}
		else if (g_matriz_number[count_line][0] == 2 && g_matriz_number[count_line][5] == 1)
		{
			g_matriz_number[count_line][1] = 3;
		}
		count_line++;
	}
}

// 	// validacao 1 - coluna 1*2 - 2*1 - ATINGIU LIMITE DE FUNÇÕES
void	validation_column_one_two(void)
{
	int	count_column;

	count_column = 0;
	while(count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 1 && g_matriz_number[5][count_column] == 2)
		{
			g_matriz_number[4][count_column] = 3;
		}else if(g_matriz_number[0][count_column] == 2 && g_matriz_number[5][count_column] == 1)
		{
			g_matriz_number[1][count_column] = 3;
		}
		count_column++;
	}
}

// // validacao 2 linha - 2*2 - 4 no quadrante do meio
void validation_line_two_two_mid_four()
{
	if(g_matriz_number[2][0] == 2 && g_matriz_number[2][5] == 2)
	{
		if(g_matriz_number[2][2] == 4)
		{
			g_matriz_number[2][3] = 1;
		}
	}
}
void validation_column_two_two_mid_four()
{
	int count_column;

	count_column = 0;
	while (count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 2 && g_matriz_number[5][count_column] == 2)
		{
			if(g_matriz_number[2][2] == 4)
			{
				g_matriz_number[3][2] = 1;
			}
		}
		count_column++;
	}
}

void validation_line_tree_one_rule_four()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 1 && g_matriz_number[count_line][5] == 3)
		{
			if(g_matriz_number[count_line][1] == 4 && g_matriz_number[count_line][2] == 2)
			{
				g_matriz_number[count_line][3] = 3;
				g_matriz_number[count_line][4] = 1;
			}else if(g_matriz_number[count_line][1] == 4 && g_matriz_number[count_line][2] == 3)
			{
				g_matriz_number[count_line][3] = 1;
				g_matriz_number[count_line][4] = 2;
			}else if(g_matriz_number[count_line][1] == 4 && g_matriz_number[count_line][2] == 1)
			{
				g_matriz_number[count_line][3] = 3;
				g_matriz_number[count_line][4] = 2;
			}
		}
		count_line++;
	}
}

void validation_line_one_tree_rule_four()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 3 && g_matriz_number[count_line][5] == 1)
		{
			if(g_matriz_number[count_line][4] == 4 && g_matriz_number[count_line][3] == 2)
			{
				g_matriz_number[count_line][2] = 3;
				g_matriz_number[count_line][1] = 1;
			}else if(g_matriz_number[count_line][4] == 4 && g_matriz_number[count_line][3] == 3)
			{
				g_matriz_number[count_line][2] = 1;
				g_matriz_number[count_line][1] = 2;
			}else if(g_matriz_number[count_line][4] == 4 && g_matriz_number[count_line][3] == 1)
			{
				g_matriz_number[count_line][2] = 3;
				g_matriz_number[count_line][1] = 2;
			}
		}
		count_line++;
	}
}

void validation_line_missing()
{
	int count_line;
	int count_column;
	int y;
	int x;
	int row;
	int soma;

	count_line = 1;
	while(count_line < 5)
	{
		count_column = 1;
		int null = 0;
		while (count_column < 5)
		{
			if(g_matriz_number[count_line][count_column] == 0)
			{
				y = count_line;
				x = count_column;
				null++;
			}
			count_column++;
		}
		if(null == 1)
		{
			row = 1;
			soma = 0;
			while(row < 5)
			{
				soma = soma + g_matriz_number[count_line][row];
				row++;
			}
			soma = 10 - soma;
			g_matriz_number[y][x] = soma;
		}
		count_line++;
	}
}

void validation_column_missing()
{
	int count_line;
	int count_column;
	int y;
	int x;
	int row;
	int soma;

	count_column = 1;
	while(count_column < 5)
	{
		count_line = 1;
		int null = 0;
		while (count_line < 5)
		{
			if(g_matriz_number[count_line][count_column] == 0)
			{
				y = count_line;
				x = count_column;
				null++;
			}
			count_line++;
		}
		if(null == 1)
		{
			row = 1;
			soma = 0;
			while(row < 5)
			{
				soma = soma + g_matriz_number[row][count_column];
				row++;
			}
			soma = 10 - soma;
			g_matriz_number[y][x] = soma;
		}
		count_column++;
	}
}
//void validation_column_one_tree_rule_four()// 1*3 regra do 4 coluna
void validation_column_one_tree_rule_four() // testar coluna
{
	int count_column;

	count_column = 0;
	while(count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 1 && g_matriz_number[5][count_column] == 3)
		{
			if(g_matriz_number[1][count_column] == 4 && g_matriz_number[2][count_column] == 1)
			{
				g_matriz_number[3][count_column] = 3;
				g_matriz_number[4][count_column] = 2;

			}else if(g_matriz_number[1][count_column] == 4 && g_matriz_number[2][count_column] == 3)
			{
				g_matriz_number[3][count_column] = 1;
				g_matriz_number[4][count_column] = 2;
			}else if(g_matriz_number[1][count_column] == 4 && g_matriz_number[2][count_column] == 2)
			{
				g_matriz_number[3][count_column] = 3;
				g_matriz_number[4][count_column] = 1;
			}
		}
		count_column++;
	}
}

// //void validation_column_tree_one_rule_four()
void validation_column_tree_one_rule_four()
{
	int count_column;

	count_column = 0;
	while(count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 3 && g_matriz_number[5][count_column] == 1)
		{
			if(g_matriz_number[4][count_column] == 4 && g_matriz_number[3][count_column] == 1)
			{
				g_matriz_number[2][count_column] = 3;
				g_matriz_number[1][count_column] = 2;

			}else if(g_matriz_number[4][count_column] == 4 && g_matriz_number[3][count_column] == 3)
			{
				g_matriz_number[2][count_column] = 1;
				g_matriz_number[1][count_column] = 2;
			}else if(g_matriz_number[4][count_column] == 4 && g_matriz_number[3][count_column] == 2)
			{
				g_matriz_number[2][count_column] = 3;
				g_matriz_number[1][count_column] = 1;
			}
		}
		count_column++;
	}
}

void show()
{
	int count_line;
	int count_column;


	int a = 0;
	char n = '\n';
	char s = ' ';
	char b = '|';
	count_line = 0;
	while(count_line < 6)
	{
		count_column = 0;
		while (count_column < 6)
		{
			a = g_matriz_number[count_line][count_column] + 48;
			write(1, &a, 1);
			write(1, &s, 1);
			write(1, &b, 1);
			write(1, &s, 1);
			count_column++;
		}
		write(1, &n, 1);
		count_line++;
	}
}

void    validation_line_two_two()
{
	int count_line;

	count_line = 0;
	while (count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 2 && g_matriz_number[count_line][5] == 2)
		{
			if(g_matriz_number[count_line][2] == 2 && g_matriz_number[count_line][3] == 4)
			{
				g_matriz_number[count_line][1] = 3;
				g_matriz_number[count_line][4] = 1;
			}else if(g_matriz_number[count_line][2] == 4 && g_matriz_number[count_line][3] == 2)
			{
				g_matriz_number[count_line][1] = 1;
				g_matriz_number[count_line][4] = 3;
			}
		}
		count_line++;
	}
}

void    validation_column_two_two()
{
	int count_column;

	count_column = 0;
	while (count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 2 && g_matriz_number[5][count_column] == 2)
		{
			if(g_matriz_number[2][count_column] == 2 && g_matriz_number[3][count_column] == 4)
			{
				g_matriz_number[1][count_column] = 3;
				g_matriz_number[4][count_column] = 1;
			}else if(g_matriz_number[2][count_column] == 4 && g_matriz_number[3][count_column] == 2)
			{
				g_matriz_number[1][count_column] = 1;
				g_matriz_number[4][count_column] = 3;
			}
		}
		count_column++;
	}
}

void    validation_tree_two_rule_four()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 3 && g_matriz_number[count_line][5] == 2)
		{
			if(g_matriz_number[count_line][3] == 4 && g_matriz_number[count_line][4] == 3)
			{
				g_matriz_number[count_line][1] = 1;
				g_matriz_number[count_line][2] = 2;
			}else if(g_matriz_number[count_line][3] == 4 && g_matriz_number[count_line][4] == 2)
			{
				g_matriz_number[count_line][1] = 1;
				g_matriz_number[count_line][2] = 3;
			}else if(g_matriz_number[count_line][3] == 4 && g_matriz_number[count_line][4] == 1)
			{
				g_matriz_number[count_line][1] = 2;
				g_matriz_number[count_line][2] = 3;
			}
		}
		count_line++;
	}
}

void    validation_two_tree_rule_four()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 2 && g_matriz_number[count_line][5] == 3)
		{
			if(g_matriz_number[count_line][2] == 4 && g_matriz_number[count_line][1] == 3)
			{
				g_matriz_number[count_line][4] = 1;
				g_matriz_number[count_line][3] = 2;
			}else if(g_matriz_number[count_line][2] == 4 && g_matriz_number[count_line][1] == 2)
			{
				g_matriz_number[count_line][4] = 1;
				g_matriz_number[count_line][3] = 3;
			}else if(g_matriz_number[count_line][2] == 4 && g_matriz_number[count_line][1] == 1)
			{
				g_matriz_number[count_line][4] = 2;
				g_matriz_number[count_line][3] = 3;
			}
		}
		count_line++;
	}
}
///
void validation_column_tree_one_rule_four_one()
{
	int count_column;

	count_column = 0;
	while(count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 3 && g_matriz_number[5][count_column] == 1)
		{
			if(g_matriz_number[4][count_column] == 4 && g_matriz_number[2][count_column] == 1)
			{
				g_matriz_number[3][count_column] = 3;
				g_matriz_number[1][count_column] = 2;
			}
		}
		count_column++;
	}
}
void validation_column_one_tree_rule_four_one()
{
	int count_column;

	count_column = 0;
	while(count_column < 6)
	{
		if(g_matriz_number[0][count_column] == 1 && g_matriz_number[5][count_column] == 3)
		{
			if(g_matriz_number[1][count_column] == 4 && g_matriz_number[3][count_column] == 1)
			{
				g_matriz_number[2][count_column] = 3;
				g_matriz_number[4][count_column] = 2;
			}
		}
		count_column++;
	}
}
void validation_line_tree_one_rule_four_one()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 3 && g_matriz_number[count_line][5] == 1)
		{
			if(g_matriz_number[count_line][4] == 4 && g_matriz_number[count_line][2] == 1)
			{
				g_matriz_number[count_line][3] = 3;
				g_matriz_number[count_line][1] = 2;
			}
		}
		count_line++;
	}
}

void validation_line_one_tree_rule_four_one()
{
	int count_line;

	count_line = 0;
	while(count_line < 6)
	{
		if(g_matriz_number[count_line][0] == 1 && g_matriz_number[count_line][5] == 3)
		{
			if(g_matriz_number[count_line][1] == 4 && g_matriz_number[count_line][3] == 1)
			{
				g_matriz_number[count_line][2] = 3;
				g_matriz_number[count_line][4] = 2;
			}
		}
		count_line++;
	}
}


