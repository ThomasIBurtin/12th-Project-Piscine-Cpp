#ifndef CONTACT
# define CONTACT

#include <iostream>
#include <cstdlib>
#include <iomanip>

class Contact
{

public:

    Contact();
    ~Contact();

    void new_contact();
    void printf_contact() const;
    void view(int index) const;
    
private:

    std::string name;
    std::string last_name;
    std::string nick_name;
    std::string number;
    std::string darkest_secret;
    std::string new_infos(std::string str) const;
    std::string _printLen(std::string str) const;
};


#endif