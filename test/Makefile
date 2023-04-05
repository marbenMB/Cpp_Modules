# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 01:03:13 by mbenbajj          #+#    #+#              #
#    Updated: 2023/04/04 21:13:42 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

SRC = main.cpp

INC = header.hpp

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address

CC = c++

STD = -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re