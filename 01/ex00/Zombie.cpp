#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{ 
    this->name = str;
}

Zombie::~Zombie ()
{
    std::cout << this->name << " was deleted\n";
}

void Zombie::announce()
{
    std::cout <<this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
