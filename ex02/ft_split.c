/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucoelho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:42:05 by gucoelho          #+#    #+#             */
/*   Updated: 2026/03/16 20:15:01 by gucoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		count_words(char *str, char *charset);
int		is_separator(char c, char *charset);
char	*push_word(char *str, char *charset, char **array, int word);

// split string into words separated by any of the chars in charset
char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		word_count;
	int		i;

	word_count = count_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (NULL);
	array[word_count] = NULL;
	i = 0;
	while (*str)
	{
		while (is_separator(*str, charset))
			str++;
		if (*str)
		{
			str = push_word(str, charset, array, i);
			i++;
		}
	}
	return (array);
}

//count number of words in string
int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_separator(str[i], charset))
				i++;
		}
	}
	return (count);
}

// checks char is a separator
int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

// append word to array 
char	*push_word(char *str, char *charset, char **array, int word)
{
	int	i;

	i = 0;
	while (!is_separator(str[i], charset) && str[i])
		i++;
	array[word] = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!array[word])
	{
		while (i < word)
			free(array[i++]);
		free(array);
		return (NULL);
	}
	while (!is_separator(*str, charset) && *str)
	{
		array[word][i++] = *str;
		str++;
	}
	array[word][i] = '\0';
	return (str);
}
