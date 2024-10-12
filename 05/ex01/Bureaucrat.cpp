/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:29:56 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 05:31:18 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Default"),grade(150)
{
}
Bureaucrat::Bureaucrat(const std::string Name,int Grade):name(Name)
{
    if(Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = Grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy):name(copy.name),grade(copy.grade)
{
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    this->grade = obj.grade;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
}
std::string Bureaucrat::getName()const
{
    return(this->name);
}
int Bureaucrat::getGrade()const
{
    return(this->grade);
}
void Bureaucrat::increment_grade()
{
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade --;
}
void Bureaucrat::decrement_grade()
{
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade ++;
}

void Bureaucrat::signForm(Form& form){
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << this->getName() << " coulnd't sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
        
}

std::ostream& operator << (std::ostream& out ,const Bureaucrat& obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return(out);
}