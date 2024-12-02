NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -I.

CC = gcc $(CFLAGS)

SRC = ft_putchr.c \
		ft_putnbr.c \
		ft_printf.c \
		ft_putstr.c \
		ft_hexadecimal.c \
		ft_adresse.c \
		ft_unssigned.c \

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
		$(CC) $(SRC) -c
		ar crs $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all