NAME = Hithisisbrain
SRC_FILES = main.cpp
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
INCLUDE = -I.

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CPPC) $(INCLUDE) $(CPPFLAGS) $(SRC_FILES) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
