#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
    public:
    Fixed();
    Fixed(const Fixed &model);
    Fixed& operator=(const Fixed &model);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:

    int _value;
    int const static _numberBit = 8;

};

#endif