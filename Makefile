LIBFT_DIR = Libft
LIBFT	= $(LIBFT_DIR)/libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
SRC		= ft_allprintf.c ft_putchar.c ft_printf.c ft_puthex.c ft_putnbr_usg.c ft_putstr.c ft_printnum.c ft_putptr.c $(LIBFT_DIR)/*.c
OBJ     = $(SRC:.c=.o)
NAME	= libftprintf.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
