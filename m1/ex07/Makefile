NAME		= sed2

SRC			=	./main.cpp	\
				./readfile.cpp	\
				./writefile.cpp	\

ROAD_S		= $(SRC)

OBJ			= $(SRC:.cpp=.o)

ROAD_O		= $(OBJ)

CXXFALGS	= -Wall -Wextra -Werror

CXX			= clang++

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFALGS) $(OBJ) -o $(NAME)

all :		$(NAME)

clean :
			rm -f $(ROAD_O)

fclean :
			rm -f $(ROAD_O)
			rm -f $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
