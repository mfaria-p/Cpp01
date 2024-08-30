SRCS =	Zombie.cpp \
		main.cpp \
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = zombieHorde
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all