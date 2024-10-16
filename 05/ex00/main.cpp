/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:10:07 by eoussama          #+#    #+#             */
/*   Updated: 2024/05/08 10:57:38 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
     Bureaucrat a;
     std::cout << a << std::endl; 
     Bureaucrat b("ma",1580);
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