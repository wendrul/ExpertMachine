SRCS	=	srcs/main.c\
		srcs/errors.c \
		srcs/ft_remove_whitespace.c \
        srcs/get_next_line.c \
        libft/ft_strjoin.c \
        libft/*.c

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

.PHONY:		all clean fclean re gud
