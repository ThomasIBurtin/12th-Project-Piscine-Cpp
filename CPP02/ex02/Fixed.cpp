#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{

}

Fixed::Fixed(const int n) : _value(n << _numberBit)
{

}

Fixed::Fixed(const float n) : _value(std::roundf( n * ( 1 << _numberBit )))
{

}

Fixed::Fixed(const Fixed &model)
{
    this->setRawBits(model._value);
}

Fixed& Fixed::operator=(const Fixed &model)
{
    if(this != &model)
        this->_value = model._value;
    return *this;
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits( void ) const
{
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


bool    Fixed::operator>( const Fixed &model ) const {
    return this->getRawBits() > model.getRawBits();
}

bool    Fixed::operator<( const Fixed &model ) const {
    return this->getRawBits() < model.getRawBits();
}

bool    Fixed::operator>=( const Fixed &model ) const {
    return this->getRawBits() >= model.getRawBits();
}

bool   Fixed::operator<=( const Fixed &model ) const {
    return this->getRawBits() <= model.getRawBits();
}

bool  Fixed::operator==( const Fixed &model ) const {
    return this->getRawBits() == model.getRawBits();
}

bool    Fixed::operator!=( const Fixed &model ) const {
    return this->getRawBits() != model.getRawBits();
}


Fixed   Fixed::operator+( const Fixed &model ) const {
    return Fixed( this->toFloat() + model.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &model ) const {
    return Fixed( this->toFloat() - model.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &model ) const {
    return Fixed( this->toFloat() * model.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &model ) const {
    return Fixed( this->toFloat() / model.toFloat() );
}

Fixed&   Fixed::operator++( void ) {
    ++this->_value;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_value;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value--;
    return tmp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}