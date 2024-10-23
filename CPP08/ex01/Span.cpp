#include "Span.hpp"

Span::Span(unsigned int N) : _max(N)
{

}

Span::Span(const Span &model) :_max(model._max), _array(model._array)
{

}

Span& Span::operator=(const Span &model)
{
    this->_array = model._array;
    this->_max = model._max;

    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
    if(this->_array.size() >= this->_max)
        throw FullArray();
    else
        this->_array.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end)
{
    if(static_cast<unsigned long>(std::distance(it_begin, it_end)) > (this->_max - this->_array.size()))
        throw FullArray();
    else
        this->_array.insert(this->_array.end(), it_begin, it_end);
}

int Span::shortestSpan()
{
    if(this->_array.size() <= 1)
        throw MissElement();
    
    std::vector<int> sorted = this->_array;
    std::sort(sorted.begin(), sorted.end());
    int shortest = INT_MAX;

    for(std::vector<int>::iterator it = sorted.begin(); it != sorted.end() - 1; it++)
    {
        int temp = *(it + 1) - *it;
        if(temp < shortest)
            shortest = temp;
    }
    return shortest;
}

int Span::longestSpan()
{
    if(this->_array.size() <= 1)
        throw MissElement();
    
    std::vector<int> sorted = this->_array;
    std::sort(sorted.begin(), sorted.end());

    return sorted.back()  - sorted.front();
}