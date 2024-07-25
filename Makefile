NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = push_swap.c\
	  ft_checkquers.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	$(CC) $(CFLAGS) $(OBJ) -L libft -lft -o push_swap

clean: 
	$(RM) $(OBJ)
	@make  clean -C libft

fclean: clean
	rm -f $(NAME)
	@make fclean  -C libft

re: fclean all

.PHONY: all clean fclean re