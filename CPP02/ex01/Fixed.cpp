#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _numberBit)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(std::roundf( n * ( 1 << _numberBit )))
{
    std::cout << "Float constructor called" << std::endl;
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

float   Fixed::toFloat( void ) const
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << _numberBit);
}

int     Fixed::toInt( void ) const
{
    return this->_value >> _numberBit;
}

std::ostream & operator<<( std::ostream & flux, Fixed const & i )
{
    flux << i.toFloat();
    return flux;
}