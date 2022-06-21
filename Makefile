NAME 	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

RM		= rm -f

FILES	=

FILO 	= $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(NAME)$(FILO)

clean:
	$(RM) $(FILO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

##.PHONY: all clean fclean re
