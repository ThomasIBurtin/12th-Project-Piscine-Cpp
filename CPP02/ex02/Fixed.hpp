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

    bool    operator>( const Fixed &model ) const ;
    bool    operator<( const Fixed &model ) const ;
    bool    operator>=( const Fixed &model ) const ;
    bool    operator<=( const Fixed &model ) const ;
    bool    operator==( const Fixed &model ) const ;
    bool    operator!=( const Fixed &model ) const ;

    Fixed   operator+( const Fixed &model ) const ;
    Fixed   operator-( const Fixed &model ) const ;
    Fixed   operator*( const Fixed &model ) const ;
    Fixed   operator/( const Fixed &model ) const ;

    Fixed&  operator++( void );
    Fixed   operator++( int );
    Fixed&  operator--( void );
    Fixed   operator--( int );

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );

    private:

    int _value;
    int const static _numberBit = 8;
};

std::ostream & operator<<( std::ostream & flux, Fixed const & i );

#endif