#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add(std:: string str, int i)
{
    Contacts[i].set_firstname(str);
}

void PhoneBook::print(int i)
{
    std::cout << Contacts[i].get_ind() << std::endl;
    std::cout << Contacts[i].get_firstname() << std::endl;
    std::cout << Contacts[i].get_lastname() << std::endl;
    std::cout << Contacts[i].get_nickname() << std::endl;
}
