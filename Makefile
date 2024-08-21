GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = push_swap.c\
	  ft_checkquers.c\
	  move.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make bonus -C libft
	@make -C libft
	$(CC) $(CFLAGS) $(OBJ) -L libft -lft -o push_swap
	@echo "$(GREEN)It has been compiled, have a nice day.👍$(NC)";


git:
	git add *
	git commit
	git push

clean: 
	$(RM) $(OBJ)
	@make  clean -C libft

fclean: clean
# rm -f $(NAME)
	@rm -f $(NAME)
	@make fclean  -C libft
	@echo "$(RED)Full Cleaning...$(NC)"
	@echo "$(RED)Full Cleaned!$(NC)"

re: fclean all

.PHONY: all clean fclean re