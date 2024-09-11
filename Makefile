GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m
CURRENT_FILE = 0
TOTAL_FILES = $(words $(SRC))
NAME = push_swap

CC = gcc -g3
CFLAGS = -Wall -Werror -Wextra 

RM = rm -f

SRC = push_swap.c\
	  ft_checkquers.c\
	  move.c\
	  order.c\
	  movement.c\
	  algoritmo.c\

OBJ = $(SRC:.c=.o)

all: show_progress $(NAME)

$(NAME): $(OBJ)
	@make bonus -s -C libft
	@make -s -C libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft -lft
	@echo "$(GREEN)It has been compiled, have a nice day.👍$(NC)";

%.o: %.c
	$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))
	@printf "Compiling $<... $(shell echo $$(($(CURRENT_FILE) * 100 / $(TOTAL_FILES))))%%\r"
	@$(CC) $(CFLAGS) -c $< -o $@ 

show_progress:
	@if [ -f $(NAME) ]; then \
		echo "$(GREEN)The compiled code is already updated.$(NC)"; \
	fi


git:
	git add *
	git commit
	git push

clean: 
	@$(RM) $(OBJ)
	@make  clean -s -C libft

fclean: clean
# rm -f $(NAME)
	@rm -f $(NAME)
	@make fclean -s -C libft
	@echo "$(RED)Full Cleaning...$(NC)"
	@echo "$(RED)Full Cleaned!$(NC)"

re: fclean all

.PHONY: all clean fclean re