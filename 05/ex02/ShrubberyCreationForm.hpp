/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:25:34 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/05 22:54:55 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include"AForm.hpp"
#include <fstream>


class ShrubberyCreationForm :public AForm{
    private :
        const std::string target;

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
};