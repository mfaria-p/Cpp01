SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = brain
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