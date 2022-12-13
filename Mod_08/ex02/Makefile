# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:32:33 by mbenbajj          #+#    #+#              #
#    Updated: 2022/12/13 16:47:27 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC = main.cpp 

INC = MutantStack.hpp 

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
