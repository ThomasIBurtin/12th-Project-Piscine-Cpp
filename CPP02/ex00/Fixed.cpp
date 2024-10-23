#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &model)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(model._value);
}

Fixed& Fixed::operator=(const Fixed &model)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &model)
        this->_value = model._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}