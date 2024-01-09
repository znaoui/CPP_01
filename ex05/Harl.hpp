#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	void	DEBUG(void);
	void	INFO(void);
	void	WARNING(void);
	void	ERROR(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif