# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: vtenneke <vtenneke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/04 18:20:34 by vtenneke      #+#    #+#                  #
#    Updated: 2020/08/04 18:20:34 by vtenneke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	convert
SRC			=	main.cpp
OBJ			=	$(SRC:%.cpp=%.o)
CPPFLAGS	=	-Wall -Wextra -Werror -pedantic -ansi -std=c++98 -g -fsanitize=address
CPP			=	clang++

# COLORS
WHITE   = \x1b[37;01m
CYAN    = \x1b[36;01m
PINK    = \x1b[35;01m
BLUE    = \x1b[34;01m
YELLOW  = \x1b[33;01m
GREEN   = \x1b[32;01m
RED     = \x1b[31;01m
BLACK   = \x1b[30;01m
RESET   = \x1b[0m

all: $(NAME)

%.o: %.c
	$(CPP) $(CPPFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@echo "$(WHITE)/-----    Compiling $(NAME)        -----\\ $(RESET)"
	$(CPP)  -o $(NAME) $^ -g -fsanitize=address

clean:
	@echo "$(WHITE)/-----    Cleaning $(NAME)        -----\\ $(RESET)"
	rm -f $(OBJ)

fclean: clean
	@echo "$(WHITE)/-----    Fcleaning $(NAME)        -----\\ $(RESET)"
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
