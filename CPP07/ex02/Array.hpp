#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    public:

    Array() : _size(0)
    {
        this->_array = new T[0];
    };

    Array(const unsigned int N) : _size(N)
    {
        this->_array = new T[N];
    };

    Array(Array const &model)
    {
        this->_size = model._size;
        this->_array = new T[model._size];
        for(unsigned int i = 0; i < model._size; i++)
            this->_array[i] = model._array[i];
    };

    Array<T> & operator=(Array const &model)
    {
        delete [] this->_array;
        this->_size = model._size;
        this->_array = new T[model._size];
        for(unsigned int i = 0; i < model._size; i++)
            this->_array[i] = model._array[i];
    };

    ~Array()
    {
         delete [] this->_array;
    };

    T& operator[](unsigned int index)
	{
		if (index >= this->_size)
			throw OutOfRange();
		return this->_array[index];
	}

    unsigned int get_size() const
    {
        return this->_size;
    };

    class OutOfRange : public std::exception
    {
        public:
        const char* what() const throw()
		{
			return ("Element is out of range of array");
		}
    };

    private:
    unsigned int _size;
    T *_array;
};

#endif