/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:25:35 by eoussama          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:25 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : AForm("Shrubbery Creation", 145, 137), target(_target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), target("Default_target")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), target(copy.target) 
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj) {
        this->target = obj.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigne()) {
        throw AForm::NotSignedException();
    }
    if (executor.getGrade() > this->getRequierdExecute()) {
        throw AForm::GradeTooLowException();
    }
    std::string				outfile = this->target + "_shrubbery";
	std::ofstream	output(outfile.c_str());
	
	output << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
	output << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
	output << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
	output << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
	output << "        {/{/(_)/}{\\{/)}{\\(_){/}/}/}/}" << std::endl;
	output << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
	output << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
	output << "      _{\\{/{\\{/(_)}{/{/{/\\}\\})\\}{/\\}" << std::endl;
	output << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
	output << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
	output << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
	output << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{(/}/}\\}/}" << std::endl;
	output << "       {/{\\{\\/}(_){\\{\\{(/}/}{\\(_)/}/}\\}" << std::endl;
	output << "         {/(/{/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
	output << "          (_){/{\\/}{\\{\\/}/}{\\{)/}/}(_)" << std::endl;
	output << "            {/{/{\\{\\/}{/{\\{\\{(_)/}" << std::endl;
	output << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
	output << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
	output << "              (_)  \\.-'.-/" << std::endl;
	output << "          __...--- |'-.-'| --...__" << std::endl;
	output << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
	output << " -\"    ' .  . '    |.'-._| '  . .  '   jro" << std::endl;
	output << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	output << "          ' ..     |'-_.-|" << std::endl;
	output << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	output << "              .'   |'- .-|   '." << std::endl;
	output << "  ..-'   ' .  '.   `-._.-'   .'  '  - ." << std::endl;
	output << "   .-' '        '-._______.-'     '  ." << std::endl;
	output << "        .      ~," << std::endl;
	output << "    .       .   |\\   .    ' '-." << std::endl;
	output << "    ___________/  \\____________" << std::endl;
	output << "   /  Why is it, when you want \\" << std::endl;
	output << "  |  something, it is so damn   |" << std::endl;
	output << "  |    much work to get it?     |" << std::endl;
	output << "   \\___________________________/" << std::endl;
    
}

