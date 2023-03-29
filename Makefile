NAME 	= 	amogusSimulator

SRC		=	$(shell find -name "*.c")

OBJ		=	$(SRC:.c=.o)


all:	$(NAME)
	@gcc -s -g -o $(NAME) $(OBJ)

$(NAME):	$(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re

