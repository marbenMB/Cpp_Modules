# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 17:38:05 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/12 17:38:43 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

INC = Zombie.hpp

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