# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 19:47:05 by mbenbajj          #+#    #+#              #
#    Updated: 2022/10/31 19:51:06 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BookPh

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp

INC = Contact.hpp PhoneBook.hpp

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