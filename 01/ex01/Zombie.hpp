/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:02:42 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/12 02:44:10 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
    private :
        std::string name;
    public:
        void announce();
        Zombie();
        ~Zombie ();
        void set_name(std ::string str);
};
Zombie* zombieHorde( int N, std::string name );
#endif