SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

.cpp.o:
	c++ $(CFLAGS) -c $<

$(NAME): $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
