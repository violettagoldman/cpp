NAME=PhoneBook
FLAGS=-Wall -Wextra -Werror -std=c++98
CC = clang++
ifeq ($(D), 1)
    FLAGS += -g3 -fsanitize=address
endif

OS = $(shell uname -s)
ifeq ($(OS), Linux)
	TICK = \342\234\224
else
	TICK = \xE2\x9C\x94
endif

SRC = ${wildcard *.cpp}
OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "\033[32;1mCPP by Violetta Goldman is done ${TICK}          "

clean:
	@rm -rf $(NAME)
	@echo "\033[32;1mCleaned ${TICK}\033[0m"

fclean: clean
	@rm -rf $(NAME).dSYM
	@echo "\033[32;1mForced cleaned ${TICK}\033[0m"

re: fclean all

.PHONY: clean fclean all re
