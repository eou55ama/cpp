/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:12:38 by eoussama          #+#    #+#             */
/*   Updated: 2024/02/21 20:32:09 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include<unistd.h>  

int take_ind()
{
    int i;
    std::cout << "Enter an index : ";
    std::cin >> i;
    return(i);
}

void take_args(std::string *args)
{
        while (args[0].empty())
        {
            std::cout << "Enter first name : ";
            std::getline(std::cin ,args[0]);
        }
        while (args[1].empty())
        {
            std::cout << "Enter last name: ";
            std::getline(std::cin ,args[1]);
        }
        while (args[2].empty())
        {
            std::cout << "Enter nickname : ";
            std::getline(std::cin ,args[2]);
        }
         while (args[3].empty())
        {
            std::cout << "Enter phone number : ";
            std::getline(std::cin ,args[3]);
        }
        while (args[4].empty())
        {
            std::cout << "Enter darkest secret : ";
            std::getline(std::cin ,args[4]);
        }
}  


int main ()
{
    PhoneBook PhoneBook;
    std:: string args[5];
    int i , x;
    i = 0;
    std :: string buf;
    while ("EXIT" != buf)
    {
        std::cout << i << "-> : ";
        std::getline (std::cin,buf);
        if ("SEARCH" == buf)
        {
            x = take_ind();
            if ( x < i)
                PhoneBook.print(x);
        }
        else if ("ADD" == buf)
        {
            take_args(args);
            if (i < 7){
            PhoneBook.add(args,i);
            i++;
            }
            else
                PhoneBook.add(args,0);
        }
    }
    exit(0);
}