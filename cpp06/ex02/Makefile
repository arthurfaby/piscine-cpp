SRCS =	\
		A.cpp \
		B.cpp \
		Base.cpp \
		C.cpp \
		main.cpp \
		\

OBJS = $(SRCS:.cpp=.o)

NAME = realType

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

.PHONY: all clean fclean re
