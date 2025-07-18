# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 17:47:50 by spitul            #+#    #+#              #
#    Updated: 2025/07/18 06:49:01 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Base.cpp main.cpp
OBJ = $(addprefix obj/, $(SRC:.cpp=.o))
CC = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98 -pedantic
HEADERS = Base.hpp

NAME = identifyer

all: $(NAME)

obj/%.o: %.cpp $(HEADERS)
	mkdir -p obj
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
