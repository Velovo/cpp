NAME			= scal

SRC				=	./main.cpp\
					./scalar_conversion.cpp

OBJ				= $(SRC:.cpp=.o)

ROAD_S			= $(SRC)

ROAD_O			= $(OBJ)

HEADER			=	./scalar_conversion.hpp

CXX				= clang++

CXXFLAGS		= -Wall -Wextra -Werror

$(NAME) :		$(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all :			$(NAME)

clean :
				rm -f $(ROAD_O)

fclean :
				rm -f $(ROAD_O)
				rm -f $(NAME)

re : 			fclean all

.PHONY: 		all clean fclean re
