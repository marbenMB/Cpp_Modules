# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 04:40:21 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/14 04:40:22 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Attack

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

INC = Weapon.hpp HumanA.hpp HumanB.hpp

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