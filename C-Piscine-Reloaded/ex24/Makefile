#MakeFile para Librerias
PATH_SRCS	= srcs
PATH_INCS	= includes
NAME		= libft.a

#COLORS
GRN 		= \033[0;32m
RED 		= \033[0;31m

#FILES
SRC			= $(PATH_SRCS)/ft_putchar.c\
			  $(PATH_SRCS)/ft_putstr.c\
			  $(PATH_SRCS)/ft_strcmp.c\
			  $(PATH_SRCS)/ft_strlen.c\
			  $(PATH_SRCS)/ft_swap.c

OBJS		= $(SRC:.c=.o)

#OPTIONS
CC			= cc
CFLAGS		= -Wall -Wextra -Werror 

#RULES#
%.o : %.c
	$(CC) $(FLAGS) -I $(PATH_INCS) -c $< -o $@

$(NAME):	$(OBJS) 
	@ar crs $(NAME) $(OBJS)

all:		$(NAME)

clean:
	@rm -f ${OBJS}

fclean:		clean
	@rm -f $(NAME)

re :		fclean all

.PHONY:		all clean fclean re
