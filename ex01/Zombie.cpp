#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
        std::cout << "\033[1;31m" << this->_name;
        std::cout << "\033[0m est mort." << std::endl;
}

void    Zombie::announce(void) const
{
        std::cout << "\033[1;31m" << this->_name;
        std::cout << "\033[0m: BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string     Zombie::getName(void) const
{
        return this->_name;
}

void    Zombie::setName(std::string name)
{
        this->_name = name;
        return ;
}