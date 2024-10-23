#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string Contact::new_infos(std::string str) const
{
    std::string info;

    std::cout << str;
    std::getline(std::cin, info); 
    while (info.empty())
    {
        if(std::cin.eof())
            exit(EXIT_FAILURE);
        std::cout << "data cannot be empty : ";
        std::getline(std::cin, info);
    }
    return (info);
}

void Contact::new_contact()
{
   this->name = new_infos("name : ");
   this->last_name = new_infos("last name : ");
   this->nick_name = new_infos("nick name : ");
   this->number = new_infos("number : ");
   this->darkest_secret = new_infos("darkest secret : ");
}

std::string Contact::_printLen(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::view(int index) const
{
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->nick_name) << std::flush;
    std::cout << "|" << std::endl;
}

void Contact::printf_contact() const
{
    std::cout << this->name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nick_name << std::endl;
    std::cout << this->number << std::endl;
    std::cout << this->darkest_secret << std::endl;
}