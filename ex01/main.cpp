#include "Zombie.hpp"

int     main()
{
        std::string     nb_zomb;
        std::string     name_zomb;
        Zombie          *newHorde;
        int             i;

        std::cout << "\033[1;31mBienvenue dans la création d'Horde de Zombies\033[0m" << std::endl;
        std::cout << "Combien de zombies voulez-vous avoir dans votre horde ?" << std::endl;
        std::getline(std::cin, nb_zomb);
        std::cout << "Quel sera le nom de vos " << nb_zomb << " zombies ?" << std::endl;
        std::getline(std::cin, name_zomb);
        newHorde = zombieHorde(atoi(nb_zomb.c_str()), name_zomb);
        if (!newHorde)
                return (1);
        i = 0;
        while (i < atoi(nb_zomb.c_str()))
        {
                newHorde[i].announce();
                i++;
        }
        delete [] newHorde;
        return (0);
}