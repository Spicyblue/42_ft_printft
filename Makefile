CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC		= ft_allprintf.c ft_putchar.c ft_putnbr.c ft_printf.c ft_puthex.c ft_putnbr_usg.c ft_putstr.c ft_printnum.c
OBJ     = $(SRC:.c=.o)
NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)DT
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
