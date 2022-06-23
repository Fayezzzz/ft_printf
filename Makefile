NAME 	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

RM		= rm -f

FILES	=	ft_putchar.c ft_putstr.c     ft_putnbr.c   ft_putunbr.c \
			ft_puthex.c  ft_puthexdown.c ft_puthexup.c

FILO 	= $(FILES:.c=.o)

INCLUDES = ./libftprintf.h

all : $(NAME)

$(NAME) : $(NAME)$(FILO)

clean:
	$(RM) $(FILO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

##.PHONY: all clean fclean re
