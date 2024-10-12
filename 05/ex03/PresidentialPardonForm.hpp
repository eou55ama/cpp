/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:26:42 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:45 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        std::string	target;

    public :
        PresidentialPardonForm(const std::string _target);
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        void	execute(Bureaucrat const & executor) const;
};