NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = push_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	$(CC) $(CFLAGS) $(OBJ) -L libft -lft -o push_swap

clean: 
	$(RM) $(OBJ)
	@make  clean -s -C libft

fclean: clean
	rm -f $(NAME)
	@make fclean -s -C libft

re: fclean all

.PHONY: all clean fclean re