
CC = g++
CFLAGS = -Werror -Wall -Wextra -std=c++98
SRC = Contact.cpp \
	  PhoneBook.cpp \
	  main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all