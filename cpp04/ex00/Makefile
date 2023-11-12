NAME = animal
SRCS = Animal.cpp main.cpp Cat.cpp Dog.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++11

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all