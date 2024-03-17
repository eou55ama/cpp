/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:01:35 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:48:36 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 0;
    int i = 0;
    Zombie *Zombies = zombieHorde(N,"mouhsiiin");
    if(Zombies == NULL)
        return 1;
    while(i < N)
    {
        Zombies[i].announce();
        i++;
    }
    delete[] Zombies;
}