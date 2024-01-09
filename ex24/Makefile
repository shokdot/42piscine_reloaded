NAME = libft.a
SRC = ./srcs/
FILES = $(SRC)ft_putchar.c $(SRC)ft_swap.c $(SRC)ft_putstr.c $(SRC)ft_strlen.c $(SRC)ft_strcmp.c
C_FLAGS = -Wall -Wextra -Werror -c
HEADER= ./includes/*.h
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(FILES) $(HEADER)
	gcc $(C_FLAGS) $(FILES) $(HEADER)
	ar rc $(NAME) *.o

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
