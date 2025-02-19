NAME = libftprintf.a
CC = cc
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "Created or modified the library"

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	@make -C libft clean
	@rm -f $(OBJ)
	@echo "Cleared compiled files"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME) $(LIBFT)
	@echo "Also the library"

re: fclean all

bonus: all

$(LIBFT):
	@make -C libft
	@cp libft/libft.a $(NAME)

.PHONY: all clean fclean re bonus
