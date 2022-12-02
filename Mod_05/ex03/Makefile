# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 08:57:25 by mbenbajj          #+#    #+#              #
#    Updated: 2022/12/02 02:53:27 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 28B 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

INC = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME) *_shrubbery

re : fclean all 

.PHONY : all clean fclean re
