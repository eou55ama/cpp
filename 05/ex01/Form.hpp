/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:58:47 by eoussama          #+#    #+#             */
/*   Updated: 2024/05/09 09:15:02 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
    private :
        const std::string name;
        const int required_grade;
        const int required_execute;
        bool signe;
    
    public :
        Form();
        Form(const std::string Name,const int r_g,const int r_e);
        Form(const Form& copy);
        Form& operator=(const Form& obj);
        ~Form();
        std::string getName()const;
        int getSigne()const;
        int getRequierdGrade()const;
        int getRequierdExecute()const;
        void beSigned(Bureaucrat &bureaucrat);
        class GradeTooHighException : public std::exception 
        {
            public:
            virtual const char* what() const throw()
            {
                return("grade Too High");
            }
        };
        class GradeTooLowException: public std::exception
        {
            public:
            virtual const char *what() const throw()
            {
                return("grade Too Low");
            }
        };
};
std::ostream& operator<< (std::ostream &out,const Form &obj);