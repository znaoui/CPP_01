#include <iostream>

int     main()
{
        std::string     string = "HI THIS IS BRAIN";
        std::string     *stringPTR = &string;
        std::string     &stringREF = string;

        std::cout << "\033[1;31mAdresse de la string: \033[0m"<< &string << std::endl;
        std::cout << "\033[1;31mAdresse du pointeur: \033[0m"<< stringPTR << std::endl;
        std::cout << "\033[1;31mAdresse de la référence: \033[0m"<< &stringREF << std::endl;
        std::cout << std::endl << "\033[1;31mContenu de la string: \033[0m"<< string << std::endl;
        std::cout << "\033[1;31mContenu du pointeur: \033[0m"<< *stringPTR << std::endl;
        std::cout << "\033[1;31mContenu de la référence: \033[0m"<< stringREF << std::endl;

        return (0);
}