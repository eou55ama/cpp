/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:56 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/12 01:52:34 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std:: string name;
    Zombie *h_zombie;
    
    std:: cout << "welcom to the stack Zombie\n";
    std:: cout << "enter a name : ";
    std:: cin >> name;
    randomChump(name);

    
    std:: cout << "welcom to the heap Zombie\n";
    std:: cout << "enter a name : ";
    std:: cin >> name;
    h_zombie = newZombie(name);
    h_zombie->announce();
    delete h_zombie;
}