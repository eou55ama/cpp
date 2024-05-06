NAME = Form
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
OBJ = Bureaucrat.o main.o Form.o
HEADER = Bureaucrat.hpp Form.hpp


all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(HEADER)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
