/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:58:39 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/04 08:25:43 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :name("Default"),required_grade(90),required_execute(90),signe(false)
{
}

AForm::AForm(const std::string Name,const int r_g,const int r_e) :name(Name),required_grade(r_g),required_execute(r_e),signe(false)
{
}

AForm::AForm(const AForm& copy):name(copy.getName()),required_grade(copy.getRequierdGrade()),required_execute(copy.getRequierdExecute()),signe(false)
{
    *this = copy;
}

AForm& AForm::operator=(const AForm& obj) {
    signe = obj.getSigne();
    return (*this);
}

AForm::~AForm() {
}

std::string AForm::getName()const{
    return(name);
}
int AForm::getSigne()const{
    return(signe);
}
int AForm::getRequierdGrade()const{
    return(required_grade);
}
int AForm::getRequierdExecute()const{
    return(required_execute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->required_grade)
        throw AForm::GradeTooLowException();
    signe = true;
}

std::ostream& operator<< (std::ostream &out,const AForm &obj)
{
    out << obj.getName() << " AForm, signed: " << obj.getSigne() << ", sign grade: " << obj.getRequierdGrade() << ", exec grade: " << obj.getRequierdExecute();
    return(out);
}