NAME = amateria
SRCS = main.cpp AMateria.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++11

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all