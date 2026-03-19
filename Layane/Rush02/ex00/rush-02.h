/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:19:51 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/14 19:17:38 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef rush02_h    // "se RUSH02_H não foi definido ainda..."
# define rush02_h  // "então define agora"

#include <stdlib.h> // Para malloc, free
#include <unistd.h> // Para read, write, close
#include <fcntl.h>  // Para open
//UTILS.C
int	valid_input(int argc, char **argv); //verifica numero de argumentos
int	is_valid_number(char *str); //verifica se string tem apenas numeros
void	ft_putstr (char *s); //imprime string com write

// //NAO CRIAMOS AINDA
// int ft_atoi(char *atoi); //converte string para inteiro
// int validate_range(int n); //valida limite do numero
// int check_str
// int validate_input(int argc, char **argv); //centraliza toda a validacao

// int open_dictionary(char *file); //abre o arquivo
// int read_dictionary(int fd, char *buffer); //le bytes (buffer: espaco de armazenamento)
// void close_dictionary(int fd); //fecha o arquivo
// int dictionary_size(int fd); //calcula o tamanho do arquivo
// int load_dictionary(char *file, char *buffer); //coordena leitura

// void convert_number(int number);// converte o numero
// void split_number(char *str); //divide numero em partes
// char *find_word(int number) //procura a palavra no dicionario // * antes do nome da funcao, porque retorna string
// void    get_number_word(char line, charnumber, char *word);
// char    find(chardict, char target);
// void ft_putstr (char *s); //imprime string com write
// char    find(chardict, char target);

// handle_hundreds //trata centenas
// handle_tens //trata dezenas


// print_word //imprime palavra
// print_space // imprime espaco
// print_newline //imprime quebra de linha
// print_error //imprime erro


#endif             // "fim da proteção"
