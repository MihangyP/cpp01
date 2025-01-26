NAME = Unecessaryviolence
SRC_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
INCLUDE = -I.

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES) Weapon.hpp HumanA.hpp HumanB.hpp
	$(CPPC) $(INCLUDE) $(CPPFLAGS) $(SRC_FILES) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
