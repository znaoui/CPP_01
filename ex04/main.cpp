#include <iostream>
#include <fstream>
#include <string>

int     main(int argc, char *argv[])
{
        if (argc == 4)
        {
                std::ifstream	        input(argv[1]);
                std::string		to_search(argv[2]);
                std::string		to_replace(argv[3]);
                std::string		temp;
                std::string		temp2;
                std::string		name;

                name = argv[1];
                name += ".replace";

                if (!input)
                        return (std::cerr << "Le fichier \033[1;31m" << argv[1] << "\033[0m n'a pas pu être ouvert." << std::endl, 1);
                std::string 	line;
                std::ofstream	output(name.c_str());
                if (to_search == to_replace)
                {
                        while(std::getline(input, line))
                                output << line << std::endl;
                        output.close();
                        return (0);
                }
                while(std::getline(input, line))
                {
                        while(42)
                        {
                                std::size_t found = line.find(to_search);
                                if (found != std::string::npos)
                                {
                                        temp = line.substr(0, found);
                                        temp = temp + to_replace;
                                        temp2 = line.substr(found + to_search.length(), line.length());
                                        line = temp + temp2;
                                }
                                else
                                        break;
                        }
                        output << line << std::endl;
                }
                output.close();
        }
        else
                return (std::cerr << "\033[1;31mErreur: le nombre d'argument n'est pas correct.\033[0m" << std::endl << "Fonctionnement: [NOM DU FICHIER] + [OCCURENCE1] + [OCCURENCE2]" << std::endl, 1);
        return (0);
}