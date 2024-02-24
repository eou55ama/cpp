/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:12:38 by eoussama          #+#    #+#             */
/*   Updated: 2024/02/23 17:22:24 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include <cstdlib> 
#include<unistd.h> 
#include <stdlib.h>
#include <ctype.h>

int valid_ind(const char *str,int i)
{
    if (strlen(str) != 1 || !isdigit(str[0]))
        return(std::cout << "invalid index \n",1);
    return(0);
}
int take_ind(int i)
{
    std ::string num;
    const char *str;
    int b;
    b = 1;
    while(b)
    {
    std::cout << "Enter an index : ";
    std::getline(std::cin ,num);
    str = num.c_str();
    b = valid_ind(str,i);
    }
    return(atoi(str));
}

void set_empty(std :: string *args)
{
    int i = 0;
    while(i < 5)
    {
        args[i] = "";
        i++;
    }
}

void take_args(std::string *args)
{
    set_empty(args);
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
    int i , x ;
    i = 0;
    std :: string buf;
    while ("EXIT" != buf)
    {
        std::cout << "-> : ";
        std::getline (std::cin,buf);
        if ("SEARCH" == buf)
        {
            x = take_ind(i);
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