NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = push_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) -L libft -lft -o push_swap -no-pie
	@make -s -C libft

clean: 
	   $(RM) $(OBJ)

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re