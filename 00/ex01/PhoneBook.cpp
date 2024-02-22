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
    std::cout << Contacts[i].get_ind() << std::endl;
    std::cout << Contacts[i].get_firstname() << std::endl;
    std::cout << Contacts[i].get_lastname() << std::endl;
    std::cout << Contacts[i].get_nickname() << std::endl;
}
