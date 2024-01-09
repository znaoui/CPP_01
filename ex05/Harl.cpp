#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
    int     i;
    std::string complainLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*choice[4])(void) = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
        
    i = 0;
	while (i < 4)
	{
		if (level == complainLevel[i])
			(this->*choice[i])();
                i++;
	}
}

void	Harl::DEBUG(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::INFO(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

}

void	Harl::WARNING(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::ERROR(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}