CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
NAME = Animal

SRCS = main.cpp\
	   Animal.cpp\
	   Dog.cpp\
	   Cat.cpp\
	   Brain.cpp\
	   WrongAnimal.cpp\
	   WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all