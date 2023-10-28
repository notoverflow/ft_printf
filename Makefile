CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_printer.c ft_more_printer.c

OBJECTS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)
%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: clean fclean re all