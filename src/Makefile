
NAME		= my_select

SRC		= my_select_main.c \

OBJ		= $(SRC:.c=.o)

CC		= gcc

RM		= rm -f

CP		= cp

HFILE		= my_select.h

LIB		= -lmy -L../

all: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)
	$(CP) $(NAME) ../
	$(CP) $(HFILE) ../include/

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all
