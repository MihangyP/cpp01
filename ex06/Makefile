NAME = harlFilter
SRC_FILES = main.cpp Harl.cpp
CPPC = c++
STD ?=
CPPFLAGS = -Wall -Wextra -Werror $(STD)
RM = rm -rf
INCLUDE = -I.

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES) Harl.hpp
	$(CPPC) $(INCLUDE) $(CPPFLAGS) $(SRC_FILES) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
