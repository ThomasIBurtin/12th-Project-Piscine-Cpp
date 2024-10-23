#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    public:
    Span(unsigned int N);
    Span(const Span &model);
    Span& operator=(const Span &model);
    ~Span();

    void addNumber(int number);
    void addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end);
    int shortestSpan();
    int longestSpan();

    class FullArray : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("Array its Full");
        }
    };

    class MissElement : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("not enough element");
        }
    };

    private:
    unsigned int _max;
    std::vector<int> _array;
};

#endif