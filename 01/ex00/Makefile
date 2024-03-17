NAME = Zombie
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
OBJ = randomChump.o newZombie.o Zombie.o main.o
HEADER = Zombie.hpp

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(HEADER)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)