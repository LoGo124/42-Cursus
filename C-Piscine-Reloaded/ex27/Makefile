#MakeFile para Librerias
NAME		= ft_display_file

#FILES
SRC			= ft_display_file.c

#OPTIONS
CC			= cc
CFLAGS		= -Wall -Wextra -Werror 

#RULES#
$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
	rm -f *.o

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
