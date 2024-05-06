/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:20:40 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/04 08:11:44 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat {
    private :
        const std::string name;
        int grade;

    public :
        Bureaucrat();
        Bureaucrat(std::string Name,int Grade);
        Bureaucrat(const Bureaucrat& copy);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& obj);
        std::string getName()const;
        int getGrade()const;
        void increment_grade();
        void decrement_grade();
        void signForm(Form& form);

        class GradeTooLowException: public std::exception
        {
            public:
            virtual const char *what() const throw()
            {
                return ("is too low");
            }
        };
        class GradeTooHighException: public std::exception
        {
            public:
            virtual const char *what() const throw()
            {
                return ("is too high");
            }
        };
};
std::ostream& operator<< (std::ostream& out,const Bureaucrat& obj);