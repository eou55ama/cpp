/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:58:47 by eoussama          #+#    #+#             */
/*   Updated: 2024/04/04 08:13:50 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
    private :
        const std::string name;
        const int required_grade;
        const int required_execute;
        bool signe;
    
    public :
        AForm();
        AForm(const std::string Name,const int r_g,const int r_e);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& obj);
        ~AForm();
        std::string getName()const;
        int getSigne()const;
        int getRequierdGrade()const;
        int getRequierdExecute()const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void	execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception 
        {
            public:
            virtual const char* what() const throw()
            {
                return("Too High");
            }
        };
        class GradeTooLowException: public std::exception
        {
            public:
            virtual const char *what() const throw()
            {
                return("Too Low");
            }
        };
        class NotSignedException: public std::exception
        {
            public:
            virtual const char *what() const throw()
            {
                return("Not signed");
            }
        };
};
std::ostream& operator<< (std::ostream &out,const AForm &obj);