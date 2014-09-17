##
## Makefile for Makefile in /home/loisel_k/taff/C/Libraire/listech/
## 
## Made by kevin loiseleur
## Login   <loisel_k@epitech.net>
## 
## Started on  Fri Jan  9 19:11:47 2014 Kevin LOISELEUR
## Last update Thu Jan  9 19:26:52 2014 Kevin LOISELEUR
##
##

CC	= gcc -c

CCLIB	= ar rc

ASSEMB	= ranlib

RM	= rm -f

CP	= cp

NAME	= libcirc.a

SRCS	= create_destroy_circ.c \
	add_elem.c \
	del_elem.c \
	first_last_elem.c

HFILE	= circ.h

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CCLIB) $(NAME) $(OBJS)
	$(ASSEMB) $(NAME)
	$(CP) $(NAME) ../
	$(CP) $(HFILE) ../include/

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
