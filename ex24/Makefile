NAME = libft.a
SRC = ./srcs/
FILES = $(SOURCE_CODE)ft_putchar.c $(SOURCE_CODE)ft_swap.c $(SOURCE_CODE)ft_putstr.c $(SOURCE_CODE)ft_strlen.c $(SOURCE_CODE)ft_strcmp.c
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
