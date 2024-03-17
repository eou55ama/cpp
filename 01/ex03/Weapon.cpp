/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:47:03 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/14 00:11:34 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->setType(name);
}

const std::string& Weapon::getType()
{
    return(this->type);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
