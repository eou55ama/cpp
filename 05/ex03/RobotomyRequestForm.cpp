/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:26:11 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:13 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"



RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : AForm("Robotomy Request", 72, 45), target(_target)
{
}
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), target("Default_target")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), target(copy.target) 
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj) {
        this->target = obj.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigne()) {
        throw AForm::NotSignedException();
    }
    if (executor.getGrade() > this->getRequierdExecute()) {
        throw AForm::GradeTooLowException();
    }
    int	nb = rand() % 100 + 1;
	if (nb % 2 == 0)
		std::cout << this->target << " has been robotomized." << std::endl;
	else
		std::cout << this->target << " was not robotomized." << std::endl;
}

