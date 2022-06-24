NAME 	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

RM		= rm -f

FILES	=	ft_putchar.c ft_putstr.c     ft_putnbr.c   ft_putunbr.c \
			ft_puthex.c  ft_puthexdown.c ft_puthexup.c ft_printf.c

FILO 	= $(FILES:.c=.o)

INCLUDES = ./libftprintf.h

all : $(NAME)

$(NAME) : $(FILO)
	$(AR) $(NAME) $(FILO)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

##.PHONY: all clean fclean re
