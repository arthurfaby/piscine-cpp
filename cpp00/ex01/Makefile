SRCS =	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = myOwnPhoneBook

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

.cpp.o:
	c++ -Wall -Wextra -Werror -g -c $<

$(NAME): $(OBJS)
	c++ -Wall -Wextra -Werror -g $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
