SRCS	= srcs/main.c

OBJS	= ${SRCS:.c=.o}

INC	= includes/

NAME	= expert_machine

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -f

CC	= gcc


${NAME}:	${OBJS}
		${CC} ${FLAGS} -I${INC} ${OBJS} -o ${NAME}

all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

gud:		all clean

.PHONY:		all clean fclean re
