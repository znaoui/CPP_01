#include "Zombie.hpp"

int	main()
{
        std::string     pseudo;
        std::cout << "\033[1;31mCréation du mode zombie en cours..\033[0m" << std::endl;
        std::cout << "Les zombies suivant vont être crée via la classe Zombie:" << std::endl;
        Zombie  New1("Nordine");
        Zombie  New2("François");
        Zombie  New3("Moussa");
        std::cout << "De \033[1;31mnouveaux\033[0m zombies ennemies arrivent:" << std::endl;
        Zombie  *NewZombie1 = newZombie("Zakaria");
        Zombie  *NewZombie2 = newZombie("Foo");
        Zombie  *NewZombie3 = newZombie("Bar");
        std::cout << "L'équipe \033[1;31mrandomChump\033[0m est présente: " << std::endl;
        randomChump("Francis");
        randomChump("Mest");
        randomChump("Ak47");
        std::cout << " mais il meurt tous directement. Les équipes restante s'affronte.." << std::endl;
        delete(NewZombie1);
        delete(NewZombie2);
        delete(NewZombie3);
        std::cout << "La guerre fût intense mais tous finiront par périr.." << std::endl;
	return (0);
}
