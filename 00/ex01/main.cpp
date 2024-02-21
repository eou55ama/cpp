/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:12:38 by eoussama          #+#    #+#             */
/*   Updated: 2024/02/21 16:57:30 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

int take_ind()
{
    int i;
    std::cout << "Enter an index : ";
    std::cin >> i;
    return(i);
}

std::string *take_args()
{
    std:: string args[5];
        while (args[0].empty())
        {
            std::cout << "kteb chi 9alwa : ";
            std::getline(std::cin ,args[0]);
        }
        while (args[1].empty())
        {
            std::cout << "kteb chi 9alwa : ";
            std::getline(std::cin ,args[1]);
        }
        while (args[2].empty())
        {
            std::cout << "kteb chi 9alwa : ";
            std::getline(std::cin ,args[2]);
        }
         while (args[3].empty())
        {
            std::cout << "kteb chi 9alwa : ";
            std::getline(std::cin ,args[3]);
        }
        while (args[4].empty())
        {
            std::cout << "kteb chi 9alwa : ";
            std::getline(std::cin ,args[4]);
        }
    return(args);
}  


int main ()
{
    PhoneBook PhoneBook;
    int i , x;
    std:: string *args;
    i = 0;
    std :: string buf;
    while (1)
    {
        std::cout << "-> : ";
        std::getline (std::cin,buf);
        if ("EXIT" == buf)
            std::cout << "exit\n";
        else if ("SEARCH" == buf)
        {
            std:: cout << "search \n";
            x = take_ind();
            if ( x < i)
                PhoneBook.print(x);
        }
        else if ("ADD" == buf)
        {
            std::cout << "add \n";
            args = take_args();
            PhoneBook.add(args,i);
        }
    }
}