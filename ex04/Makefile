NAME = Sedisforlosers
SRC_FILES = main.cpp
CPPC = c++
STD ?=
CPPFLAGS = -Wall -Wextra -Werror $(STD)
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
