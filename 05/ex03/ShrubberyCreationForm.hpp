/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:25:34 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:56 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include"AForm.hpp"
#include <fstream>


class ShrubberyCreationForm :public AForm{
    private :
        std::string target;

    public :
        ShrubberyCreationForm(const std::string _target);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        void	execute(Bureaucrat const & executor) const;
};