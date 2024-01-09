#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
        Zombie  *newHorde;
        int     i;

        if (N <= 0)
                return (NULL);
        i = 0;
        newHorde = new Zombie[N];
        while (i < N)
        {
                newHorde[i].setName(name);
                i++;   
        }
        return (newHorde);
}