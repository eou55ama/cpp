/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:10:07 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:20:29 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;


	try {
        srand(time(0));
        Bureaucrat oussama("oussama", 5);
        PresidentialPardonForm form1("laarbi");
        oussama.signForm(form1);
        oussama.executeForm(form1);
    }
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	return 0;
}