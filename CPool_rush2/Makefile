SRC	=	main.c \
		rush2.c \
		find_lang.c \
		rush2_v2.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	rush2

all:	$(NAME)
 
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib -lmy
	
clean:
	rm -f *.o
	rm -f *.out

fclean: clean
	rm -f $(NAME)

re:	fclean all
