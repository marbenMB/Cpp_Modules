# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 00:33:24 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/13 00:33:25 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRC = main.cpp


CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re