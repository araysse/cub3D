SRC = get_next_line.c get_next_line_utils.c main_parc.c split.c ft_strchr.c ft_strtrim.c ft_strncmp.c ft_strdup.c ft_atoi.c norm1.c norm2.c norm3.c norm4.c norm5.c

CFLAGS = -Wall -Wextra -Werror -g
#-fsanitize=address
NAME = cub

OBJ = ${SRC:.c=.o}

all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -g -o $(NAME)
		
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY:	all clean fclean re