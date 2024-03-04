NAME = phonebook
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f
OBJS  = main.o PhoneBook.o Contact.o
HEADER = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Success, executable ./$(NAME) created."

 $(OBJS): $(HEADER)
 
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "Success cleaned."