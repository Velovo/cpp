# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 16:02:37 by avan-pra          #+#    #+#              #
#    Updated: 2019/10/10 13:39:50 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= phone_book

SRC				=	./main.cpp\

ROAD_S			= $(SRC)

ROAD_O			= $(OBJ)

FLAGS			= -Wall -Wextra -Werror

OBJ				= $(SRC:.cpp=.o)

CXX				= clang++

HEADER_DIR		= -I./head/get_next_line.h -I./head/minishell.h 

$(NAME) :		$(OBJ)
				$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

all :			$(NAME)

clean :
				rm -f $(ROAD_O)

fclean :
				rm -f $(ROAD_O)
				rm -f $(NAME)

re : 			fclean all

.PHONY: 		all clean fclean re
