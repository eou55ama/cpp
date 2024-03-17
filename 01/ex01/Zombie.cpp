/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:02:46 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:44:20 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{ 
}

Zombie::~Zombie ()
{
    std::cout << this->name << " was deleted\n";
}

void Zombie::announce()
{
    std::cout <<this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie:: set_name(std::string str)
{
    this->name = str;
}