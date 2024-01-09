#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
                void	announce(void);
		~Zombie();
};

Zombie	*newZombie(std::string);
void	randomChump(std::string);

#endif
