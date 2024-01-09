#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
	std::string	name;
	std::string	weapon;
	std::cout << "Choisissez le prénom du premier joueur : ";
	if (!std::getline(std::cin, name))
		exit (1);
	std::cout << "Choisissez le nom de son arme : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	Weapon weapon1 = Weapon(weapon);
	HumanA number1(name, weapon1);
	number1.attack();
	std::cout << "Choisissez le prénom du deuxième joueur : ";
	if (!std::getline(std::cin, name))
		exit (1);
	std::cout << "Choisissez le nom de son arme : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	Weapon weapon2 = Weapon(weapon);
	HumanA number2(name, weapon2);
	number2.attack();
	std::cout << "Choisissez un autre nom pour son arme : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	weapon2.setType(weapon);
	number2.attack();
        /* ************************************************** */
        std::cout << "Choisissez le prénom du troisième joueur : ";
	if (!std::getline(std::cin, name))
		exit (1);
	HumanB number3(name);
        std::cout << "Choisissez le nom de son arme (facultatif): ";
	if (!std::getline(std::cin, weapon))
		exit (1);
        Weapon weapon3 = Weapon(weapon);
        number3.setWeapon(weapon3);
	number3.attack();
        std::cout << "Application du changement de nom en 'lanceur de parents'" << std::endl;
        weapon3.setType("lanceur de parents");
        number3.attack();
	return (0);
}