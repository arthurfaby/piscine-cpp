SRCS =	main.cpp \
		Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = fixed

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
