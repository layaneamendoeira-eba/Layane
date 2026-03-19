#include "rush-02.h"

//
char    *load_dictionary(char *file)
{
    int    fd;                 // identificador do arquivo
    int    bytes;              // quantidade de caracteres lidos
    static char    dictionary[10000];  // espaço para guardar o conteúdo do arquivo

    fd = open(file, O_RDONLY);            // abre o arquivo
    bytes = read(fd, dictionary, 9999);   // lê o conteúdo para dentro da variável
    dictionary[bytes] = '\0';              // final da string
    close(fd);                             // fecha o arquivo
    return (dictionary);                   // retorna o conteúdo do dicionário
}

// void    get_number_word(char line, charnumber, char *word)
// {
//     int    l; // índice para percorrer a linha
//     int    w; // índice para montar a palavra

//     l = 0;
//     w = 0;
//     while (line[l] != ':' && line[l] != '\0') // copia até encontrar :
//     {
//         number[l] = line[l];
//         l++;
//     }
//     number[l] = '\0'; // termina a string do número
//     l++; // pula o caractere :
//     while (line[l] == ' ') // pula espaços
//         l++;
//     while (line[l] != '\0') // copia o resto da linha
//     {
//         word[w] = line[l];
//         l++;
//         w++;
//     }
//     word[w] = '\0'; // termina a string da palavra
// }
// char    find(chardict, char *target)
// {
//     int    d; // percorre o dicionário
//     int    l; // monta uma linha
//     char    line[200]; // guarda uma linha do dicionário

//     d = 0;
//     while (dict[d] != '\0') // percorre todo o dicionário
//     {
//         l = 0;
//         while (dict[d] != '\n' && dict[d] != '\0') // copia uma linha
//         {
//             line[l] = dict[d];
//             d++;
//             l++;
//         }
//         line[l] = '\0'; // termina a linha
//         if (same(line, target)) // verifica se é o número procurado
//             return (line);
//         if (dict[d] == '\n') // pula a quebra de linha
//             d++;
//     }
//     return (0);
// }
