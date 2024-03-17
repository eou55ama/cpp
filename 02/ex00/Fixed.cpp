/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:23:39 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/17 06:35:20 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num = 0;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator = (const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->num = obj.getRawBits();
    return *this;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;    
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->num;
}

void    Fixed::setRawBits( int const raw ) {
    this->num = raw;
}
