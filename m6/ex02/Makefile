NAME			= identify

SRC				=	./main.cpp\
					./A.cpp\
					./B.cpp\
					./C.cpp\
					./Base.cpp

OBJ				= $(SRC:.cpp=.o)

ROAD_S			= $(SRC)

ROAD_O			= $(OBJ)

HEADER			=	./A.hpp\
					./B.hpp\
					./C.hpp\
					./Base.hpp

CXX				= clang++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

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
