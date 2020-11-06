SRCS	= *.c

NAME	= libft

GCC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:
			${GCC} -o ${NAME} ${CFLAGS} ${SRCS}

all:		${NAME}
   				
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
