#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern& copy) {
    *this = copy;
}

Intern& Intern::operator=(const Intern& obj) {
    if (this != &obj) {
    }
    return (*this);
}

AForm	*newPresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*newRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*newShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}


AForm * Intern::makeForm(std::string formName, std::string target)
{
    AForm *(*all_forms[])(const std::string target) = {&newPresident, &newRobot, &newShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (all_forms[i](target));
		}
	}
    std::cout << "Form doesn't exists." << std::endl;
    return NULL;
}