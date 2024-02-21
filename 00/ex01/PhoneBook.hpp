#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact Contacts[8];
    public :
        void print(int i);
        void add(std:: string *args,int i);
};

#endif