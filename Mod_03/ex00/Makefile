# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 05:15:38 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/22 14:49:07 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = ClapTrap.cpp main.cpp

INC = ClapTrap.hpp

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