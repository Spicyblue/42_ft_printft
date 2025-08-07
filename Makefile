LIBFT_DIR = Libft
LIBFT	= $(LIBFT_DIR)/libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
<<<<<<< HEAD
SRC		= ft_allprintf.c ft_putchar.c ft_putnbr.c ft_printf.c ft_puthex.c ft_putnbr_usg.c ft_putstr.c ft_printnum.c 
=======
SRC		= ft_allprintf.c ft_putchar.c ft_printf.c ft_puthex.c ft_putnbr_usg.c ft_putstr.c ft_printnum.c ft_putptr.c $(LIBFT_DIR)/*.c
>>>>>>> 9148c42cd520277de1419c61973574c2c6d6ced0
OBJ     = $(SRC:.c=.o)
NAME	= libftprintf.a
LIBFT	= Libft/libft.a
LIBFT_DIR = Libft

all: $(LIBFT) $(NAME)
<<<<<<< HEAD

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
=======
>>>>>>> 9148c42cd520277de1419c61973574c2c6d6ced0

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
