/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:26:09 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:50 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private :
        std::string	target;

    public :
        RobotomyRequestForm(const std::string _target);
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        void	execute(Bureaucrat const & executor) const;
};