#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_weapon)
{
        this->_name = name;
        this->_weapon = &_weapon;
}

HumanA::~HumanA()
{
}

void    HumanA::attack() const
{
        std::cout << this->_name << " attaque avec " << this->_weapon->getType() << std::endl;
}