NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC_FILES = main.c parse.c error.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) libft/libft.a
	$(CC) $(CFLAGS) $(OBJ_FILES) libft/libft.a -o $(NAME)

libft/libft.a:
	make -C libft
	make -C libft bonus

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
