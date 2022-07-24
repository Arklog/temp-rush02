SRCS	= main.c $(wildcard src/*.c)
OBJS	= ${SRCS:.c=.o}

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
INCLUDE	= -I.

RM	= rm -f

NAME	= rush-02

.c.o:
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

all:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} all

re:
	fclean all

.PHONY:	all clean fclean re
