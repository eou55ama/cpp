/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:12:38 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/03 13:26:05 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include <cstdlib> 
#include<unistd.h> 
#include <stdlib.h>
#include <ctype.h>

int valid_ind(const char *str)
{
    if (strlen(str) != 1 || !isdigit(str[0]) || str[0] > '7') 
        return(std::cout << "invalid index \n",1);
    return(0);
}
int take_ind()
{ 
    std ::string num;
    const char *str;
    int b;
    b = 1;
    while(b)
    {
    std::cout << "Enter an index 0 -> 7: ";
    if (std::getline(std::cin ,num) == false)
        exit(1);
    str = num.c_str();
    b = valid_ind(str);
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
    std::string str[5] = {"first name : ","last name: ","nickname : ","phone number : ","darkest secret : "};
    set_empty(args);
    int i = 0;
    while(i < 5){
        while (args[i].empty())
        {
            std::cout << "Enter " << str[i];
            if (std::getline(std::cin ,args[i]) == false)
                exit(1);
        }
        i++;
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
        if (std::getline (std::cin,buf) == false)
            exit(1);
        if ("SEARCH" == buf)
        {
            PhoneBook.display(i);
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