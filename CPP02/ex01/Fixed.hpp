#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed( const int n );
    Fixed( const float n );
    Fixed(const Fixed &model);
    Fixed& operator=(const Fixed &model);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

    private:

    int _value;
    int const static _numberBit = 8;
};

std::ostream & operator<<( std::ostream & flux, Fixed const & i );

#endif