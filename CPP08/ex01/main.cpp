#include "Span.hpp"

int main()
{
    Span span = Span(5);

    try
    {
        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    Span sp = Span(1000);
    std::vector<int> tab;

    for(int i = 0; i < 1000; i++)
        tab.push_back(i);

    try
    {
        sp.addNumber(tab.begin(), tab.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}