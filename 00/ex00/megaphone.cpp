/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:04:37 by eoussama          #+#    #+#             */
/*   Updated: 2024/02/08 15:36:01 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <cctype>

int main (int ac, char **av)
{
    int i,j;
    i = 1;
   if (ac > 1)
   {
    while (av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if (islower(av[i][j]))
            {
                std::cout << (char)toupper(av[i][j]);
            }
            else
                std::cout << av[i][j]; 
            j++;
        }
        i++;
    }
    std::cout << std::endl;
   }
   else
    std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
