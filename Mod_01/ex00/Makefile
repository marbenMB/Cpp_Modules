# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:44 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/11 18:56:08 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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