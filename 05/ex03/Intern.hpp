#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private :


    public :
        Intern();
        ~Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& obj);
        AForm * makeForm(std::string formName, std::string target);
};