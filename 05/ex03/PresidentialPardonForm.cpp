/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:26:27 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:02 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm("Presidential Pardon", 25, 5), target(_target)
{
}
PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), target("Default_target")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), target(copy.target) 
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj) {
        this->target = obj.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigne()) {
        throw AForm::NotSignedException();
    }
    if (executor.getGrade() > this->getRequierdExecute()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

