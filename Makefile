
SRC = 	main.c 				\
		add_node.c 			\
		print_list.c 		\
		create_pile.c 		\
		is_int.c 			\
		check_double.c 		\
		check_int_format.c 	\
		initialize_list.c   \
		push_swap.c 		\
		check_sorted_list.c \
		rotate_list.c    	\
		delete_node.c 		\
		swap_list.c
DIR = srcs/
LIB = libft/
HEADER = includes/
FLAGS = -Wall -Wextra -Werror -g
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	@make -s -C $(LIB)
	@gcc $(FLAGS) -o $(NAME) $^ -L$(LIB) -lft
	@echo "push_swap is ready. Enjoy!"

%.o: $(DIR)%.c
	@gcc $(FLAGS)  -o $@ -c $< -I$(LIB)$(HEADER) -I$(HEADER)

clean:
	@rm -f $(OBJ)
	@make clean -s -C $(LIB)
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@make fclean -s -C $(LIB)
	@echo "Folder cleanup successful"

re: fclean all

.PHONY: all clean fclean re