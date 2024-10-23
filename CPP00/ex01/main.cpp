
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string str;
    PhoneBook instance;

    while(1)
    {
        std::cout << "commande : ";
        std::getline(std::cin, str);
        while (str.empty())
        {
            if(std::cin.eof())
                exit(EXIT_FAILURE);
            std::cout << "commande : ";
            std::getline(std::cin, str);
        }
        if(str == "EXIT")
            break;
        else if(str == "ADD")
            instance.add_contact();
        else if(str == "SEARCH")
            instance.search_contact();
    }
}