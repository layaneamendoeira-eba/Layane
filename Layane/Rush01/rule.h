/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaique- <acaique-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 09:20:37 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/08 16:55:17 by acaique-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTECTION_H
# define PROTECTION_H

 extern int g_matriz_number[6][6];

void validation_one_solo(void);
void validation_four_solo(void);
void validation_line_tree_two(void);
void validation_column_tree_two(void);
void validation_line_one_two(void);
void validation_column_one_two(void);
void validation_line_two_two_mid_four(void);
void validation_column_two_two_mid_four(void);
void validation_line_missing(void);
void validation_column_missing(void);
void validation_line_one_tree_rule_four(void);
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
void in_matriz(int matriz_number[6][6], char *str);
void show(void);

#endif


