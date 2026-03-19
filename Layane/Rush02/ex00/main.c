/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:25:26 by lsouza-a          #+#    #+#             */
/*   Updated: 2026/03/14 19:30:47 by lsouza-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

int    main(int argc, char **argv)
{
    if (!valid_input(argc, argv))
    {
        ft_putstr("Error\n");
        return (1);
    }
    return (0);

    // load_dictionary("numbers.dict");   // lê o arquivo
    // convert(argv[1]);                  // converte o número
    // return (0);
}
