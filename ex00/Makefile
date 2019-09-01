SRCS	=	srcs/main.c\
		srcs/ft_split.c\
		srcs/errors.c

OBJS	= ${SRCS:.c=.o}

INCLS	= ./includes/

NAME	= expert_machine

CFLAGS	= -Wall -Werror -Wextra -I${INCLS}

RM	= rm -f

CC	= gcc


${NAME}:	${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

gud:		all clean

.PHONY:		all clean fclean re
