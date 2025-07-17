# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 17:47:50 by spitul            #+#    #+#              #
#    Updated: 2025/07/16 21:37:57 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Serializer.cpp Data.cpp main.cpp
OBJ = $(addprefix obj/, $(SRC:.cpp=.o))
CC = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98 -pedantic
HEADERS = Serializer.hpp Data.hpp

NAME = serializer

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
