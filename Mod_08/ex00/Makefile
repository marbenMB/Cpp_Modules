# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marouanebenbajja <marouanebenbajja@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:40 by marouaneben       #+#    #+#              #
#    Updated: 2022/12/12 17:33:41 by marouaneben      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC = easyfind.tpp main.cpp 

INC = easyfind.hpp 

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
