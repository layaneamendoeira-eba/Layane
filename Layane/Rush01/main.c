/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaique- <acaique-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 09:47:36 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/08 16:41:03 by acaique-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void validation_one_solo(void);
void validation_four_solo(void);
void validation_line_tree_two(void);
void validation_column_tree_two(void);
void validation_line_one_two(void);
void validation_column_one_two(void);
void validation_line_two_two_mid_four(void);
void validation_column_two_two_mid_four(void);
void validation_line_missing(void);
void validation_column_tree_one_rule_four(void);
void validation_line_tree_one_rule_four(void);
void validation_line_one_tree_rule_four(void);
void validation_column_missing(void);
void validation_column_one_tree_rule_four(void);
void validation_column_tree_one_rule_four(void);
void validation_line_two_two(void);
void validation_column_two_two(void);
void validation_tree_two_rule_four(void);
void validation_two_tree_rule_four(void);
void validation_column_tree_one_rule_four_one(void);
void validation_column_one_tree_rule_four_one(void);
void validation_line_tree_one_rule_four_one(void);
void validation_line_one_tree_rule_four_one(void);
void in_matriz(int g_matriz_number[6][6], char *str);
void show(void);

int	g_matriz_number[6][6] = {
{0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0}
};

// int	main(void)
// {

// 	validation_one_solo();
// 	validation_four_solo();

// 	int a = 0;

// 	while(a < 20)
// 	{
// 		validation_line_tree_two();
// 		validation_column_tree_two();
// 		validation_line_one_two();
// 		validation_column_one_two();
// 		validation_line_two_two_mid_four();
// 		validation_column_two_two_mid_four();
// 		validation_line_missing();
// 		validation_column_tree_one_rule_four();
// 		validation_line_tree_one_rule_four();
// 		validation_line_one_tree_rule_four();
// 		validation_column_missing();
// 		validation_column_one_tree_rule_four();
// 		validation_column_tree_one_rule_four();
// 		validation_line_two_two();
// 		validation_column_two_two();
// 		validation_column_missing();
// 		validation_tree_two_rule_four();
// 		validation_two_tree_rule_four();
// 		validation_column_tree_one_rule_four_one();
// 		validation_column_one_tree_rule_four_one();
// 		validation_line_tree_one_rule_four_one();
// 		validation_line_one_tree_rule_four_one();
// 		a++;
// 	}
// 	show();
// }


int main(int argc, char **argv)
{

    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }

    in_matriz(g_matriz_number, argv[1]);

    show();
}

