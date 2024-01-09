#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string	string;
	std::cout << "\033[1;31m Veuillez choisir un des niveaux de gravité ci-contre (DEBUG, INFO, WARNING, ERROR): \033[m";
	if (!(std::getline(std::cin, string)))
	        return (1);
	harl.complain(string);
        return (0);
}