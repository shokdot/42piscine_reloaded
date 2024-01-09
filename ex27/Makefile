NAME = ft_display_file
SRC = ./ft_display_file.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
    chmod 777 $(NAME)

$(NAME):
    cc $(FLAGS) $(SRC) -o $(NAME)

clean:
    rm -f *.o

fclean: clean
    rm -f $(NAME)

.PONY: all clean fclean
