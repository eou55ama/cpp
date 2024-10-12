/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:10:07 by eoussama          #+#    #+#             */
/*   Updated: 2024/05/09 09:55:21 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
int main(void)
{
    try
    {
     Bureaucrat mowdaf("oussama",1);
     std::cout << mowdaf << std::endl;
     Form wati9a("wkala",88,0);
     mowdaf.signForm(wati9a);
     std::cout << wati9a << std::endl;
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
     
    return (0);
}