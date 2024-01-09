#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
        this->_name = name;
        announce();
}

Zombie::~Zombie()
{
	std::cout << "\033[1;31m" << this->_name << "\033[0m est mort." << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << "\033[1;31m" << _name;
	std::cout << "\033[0m:";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
