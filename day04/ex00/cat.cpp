/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:20:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 10:58:07 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src): Animal(src){}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &   Cat::operator=(Cat const & rhs)
{
    Animal::operator=(rhs);
    return *this;
}

void            Cat::makeSound(void) const
{
    std::cout << "Meeoooow" << std::endl;
}