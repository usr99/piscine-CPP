NAME	= megaphone
SRC		= megaphone.cpp
OBJ		= ${SRC:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= clang++
RM		= rm -rf

${NAME}:${SRC}
		${CC} ${CFLAGS} $< -o $@

all:	${NAME}

clean:
		${RM} ${NAME}

re:		clean all

.PHONY:	all clean fclean re
