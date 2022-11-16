# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 18:53:40 by mbenbajj          #+#    #+#              #
#    Updated: 2022/11/15 18:55:42 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = main.cpp Harl.cpp

INC = Harl.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) *.replace

re : fclean all

.PHONY : all clean fclean re