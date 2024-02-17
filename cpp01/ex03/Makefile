CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -fsanitize=address
RM = rm -rf
NAME = Violence

SRCS = main.cpp\
	   HumanA.cpp\
	   HumanB.cpp\
	   Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)