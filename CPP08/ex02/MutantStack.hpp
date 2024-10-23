#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:

    MutantStack() : std::stack<T>()
    {
        
    }

    MutantStack(const MutantStack &model) : std::stack<T>(model)
    {

    }

    MutantStack &operator=(const MutantStack &model)
    {
        if (this != &model)
        {
            std::stack<T>::operator=(model);
        }
        return *this;

    }

    ~MutantStack()
    {

    }

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::iterator reverse_iterator;

    typename std::deque<T>::iterator begin()
    {
        return this->c.begin();
    }
    typename std::deque<T>::iterator end()
    {
        return this->c.end();
    }
    typename std::deque<T>::iterator rbegin()
    {
        return this->c.rbegin();
    }
    typename std::deque<T>::iterator rend()
    {
        return this->c.rend();
    }
};

#endif