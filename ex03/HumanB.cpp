#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
        this->_name = name;
        this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &weapon)
{
        this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
        std::cout << this->_name << " attaque ";
        if (this->_weapon && this->_weapon != NULL)
        {
                std::cout << "avec " << this->_weapon->getType() << std::endl;
        }
        else
                std::cout << "." << std::endl;
}