# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 15:56:59 by mbenbajj          #+#    #+#              #
#    Updated: 2022/10/16 16:10:56 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = megaphone.cpp

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