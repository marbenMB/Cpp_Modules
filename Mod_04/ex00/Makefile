# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 15:34:23 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/26 15:57:11 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC = Animal.cpp main.cpp Dog.cpp Cat.cpp

INC = Animal.hpp Dog.hpp Cat.hpp

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
