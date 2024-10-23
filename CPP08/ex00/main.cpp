#include "EasyFind.hpp"

int main()
{
    std::vector<int> array;
    array.push_back(7);
    array.push_back(5);
    std::vector<int>::iterator it;

    try
    {
        it = easyfind(array, 5);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}