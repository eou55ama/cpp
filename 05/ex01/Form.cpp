/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:58:39 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/04 08:25:43 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("Default"),required_grade(90),required_execute(90),signe(0)
{
}

Form::Form(const std::string Name,const int r_g,const int r_e) :name(Name),required_grade(r_g),required_execute(r_e),signe(0)
{
}

Form::Form(const Form& copy):name(copy.getName()),required_grade(copy.getRequierdGrade()),required_execute(copy.getRequierdExecute()),signe(0)
{
    *this = copy;
}

Form& Form::operator=(const Form& obj) {
    signe = obj.getSigne();
    return (*this);
}

Form::~Form() {
}

std::string Form::getName()const{
    return(name);
}
int Form::getSigne()const{
    return(signe);
}
int Form::getRequierdGrade()const{
    return(required_grade);
}
int Form::getRequierdExecute()const{
    return(required_execute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() < this->required_grade)
        throw Form::GradeTooHighException();
    signe = 1;
}

std::ostream& operator<< (std::ostream &out,const Form &obj)
{
    out << obj.getName() << " form, signed: " << obj.getSigne() << ", sign grade: " << obj.getRequierdGrade() << ", exec grade: " << obj.getRequierdExecute();
    return(out);
}