NAME			= scalar_conversion
SRC				= main.cpp conversion.cpp types.cpp utils.cpp
OBJ_DIR			= objs/
OBJ				= ${addprefix ${OBJ_DIR}, ${SRC:.cpp=.o}}
CC				= clang++
CFLAGS			= -Wall -Wextra -Werror --std=c++98

${OBJ_DIR}%.o:	%.cpp
				${CC} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJ_DIR} ${OBJ}
				${CC} ${CFLAGS} -o $@ ${OBJ}

${OBJ_DIR}:
				mkdir -p ${OBJ_DIR}

all:			${NAME}

clean:
				rm -rf ${OBJ_DIR}

fclean:			clean
				rm -rf ${NAME}

re:				fclean all

.PHONY:			all clean fclean re