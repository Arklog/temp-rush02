CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

SRCS	= main.c fct.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} all

re:
	fclean all

.PHONY:	all clean fclean re
