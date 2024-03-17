/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:02:39 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:44:54 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if(N < 0)
        return NULL;
    Zombie *Zombies = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        Zombies[i].set_name(name);
        i++;       
    }
    return(Zombies);
}