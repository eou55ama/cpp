/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:00:30 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:31:18 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon){
  this->weapon = &weapon;
}

void HumanB::setWeapon(Weapon *weapon){
  this->weapon = weapon;
}

HumanB::HumanB(std::string name)
{
  nameB = name;
}

void HumanB::attack()
{
  if (!weapon)
  {
    std::cout << "weapon is null" << std::endl;
    return ;
  }
  std ::cout << nameB << " attacks with their " << weapon->getType() << std::endl;
}