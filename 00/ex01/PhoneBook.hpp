#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <cstring>
class PhoneBook
{
    private :
        Contact Contacts[8];
    public :
        void print(int i);
        void add(std:: string *args,int i);
        void display(int i);
        std::string print_block(std::string str);
};

#endif