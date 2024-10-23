#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class NotFind : public std::exception
{
    public:
    const char* what() const throw()
	{
		return ("not found in container");
	}
};

template <typename T>
typename T::iterator easyfind(T conteneur, int n)
{
    typename T::iterator it = std::find(conteneur.begin(), conteneur.end(), n);
    if(it == conteneur.end())
        throw NotFind();
    else
        return it;
}

#endif