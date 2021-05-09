NAME	= ex02
SRC		= main.cpp
OBJ		= ${SRC:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= clang++
RM		= rm -rf

%.o:	%.cpp
		${CC} ${CFLAGS} -c $< -o $@ -I Array.hpp

${NAME}:${OBJ}
		${CC} ${CFLAGS} -o $@ ${OBJ} -I Array.hpp

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:		clean all

.PHONY:	all clean fclean re
