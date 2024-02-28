#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add(std:: string *args, int i)
{
    Contacts[i].set_firstname(args[0]);
    Contacts[i].set_lastname(args[1]);
    Contacts[i].set_nickname(args[2]);
    Contacts[i].set_phonenumber(args[3]);
    Contacts[i].set_darkestsecret(args[4]);
    Contacts[i].set_ind(i);

}

void PhoneBook::print(int i)
{
    std::cout << "index         : " << Contacts[i].get_ind() << std::endl;
    std::cout << "first name    : " << Contacts[i].get_firstname() << std::endl;
    std::cout << "last name     : " << Contacts[i].get_lastname() << std::endl;
    std::cout << "nickname      : " << Contacts[i].get_nickname() << std::endl;
    std::cout << "phonenumber   : " << Contacts[i].get_phonenumber() << std::endl;
    std::cout << "darkestsecret : " << Contacts[i].get_darkestsecret() << std::endl;
}

std::string PhoneBook::print_block(std::string str)
{
   if (strlen(str) > 10 )
        return()
} 

void PhoneBook:: display(int i)
{
    int x = 0;
    std::cout << "------------- PHONBOOK CONTACTS -------------\n";
    while(x < i)
    {
        std::cout << "|" << std::setw(10) << x << "|" << std::setw(10) << Contacts[x].get_firstname() << "|" << std::setw(10)
        << Contacts[x].get_lastname() << "|" << std::setw(10) << Contacts[x].get_nickname() << "|" << std::endl;
        x++;
    }
}