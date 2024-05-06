/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:25:35 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/05 22:54:17 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) :target(copy.target)
{
    *this = copy;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
    if (this != &obj) {
    }
    return (*this);
}