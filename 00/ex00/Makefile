NAME = megaphone
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f
OBJS  =  megaphone.o

all: $(NAME)

$(NAME): $(OBJS) 
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Success, executable ./$(NAME) created."

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "Success cleaned."