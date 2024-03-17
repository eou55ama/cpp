/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:54:10 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:51:16 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon &weapon):weapon(weapon),nameA(name)
{
}

void HumanA::attack()
{
  std ::cout << nameA << " attacks with their " << weapon.getType() << std::endl;
}