NAME = AForm
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
OBJ = Bureaucrat.o main.o AForm.o PresidentialPardonForm.o RobotomyRequestForm.o ShrubberyCreationForm.o
HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp


all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(HEADER)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
