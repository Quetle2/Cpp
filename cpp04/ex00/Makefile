CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -fsanitize=address
RM = rm -rf
NAME = Polymorphism

SRCS = main.cpp\
	   Animal.cpp\
	   Dog.cpp\
	   Cat.cpp\
	   WrongAnimal.cpp\
	   WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all