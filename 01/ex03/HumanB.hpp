/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:12 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 01:31:22 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        Weapon *weapon;
        std::string nameB;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
        void setWeapon(Weapon *weapon);
};

#endif
