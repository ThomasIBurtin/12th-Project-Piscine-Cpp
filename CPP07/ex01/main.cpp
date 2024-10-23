#include "main.hpp"

template<typename T, typename F>
void iter(T *array, unsigned int len, F fonction)
{
    unsigned int i = 0;
    while(i < len)
    {
        fonction(array[i]);
        i++;
    }
}

template<typename T>
void lecture(const T &index)
{
    std::cout << index << std::endl;
}

int main()
{
    char array[] = {'a', 'v', 'c'};
    iter(array, 3, lecture<char>);
}