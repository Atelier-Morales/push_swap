MKEX = cc -g -o
DIRSRC = srcs/
SRC = main.c
FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
COMP = cc -c
NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJECT)
		@$(MKEX) $(NAME) $(DIRSRC)$(OBJECT) -L libft/ -lft
		@echo "push_swap is ready. Enjoy!"

$(OBJECT) :
		@make -C libft/
		@$(COMP) $(DIRSRC)$(SRC) $(FLAGS) -I./ -I libft/
		@echo "Compilation of C files succesful"

clean :
		@/bin/rm -f $(DIRSRC)$(OBJECT)
		@echo "Object deleted"


fclean : clean
		@/bin/rm -f $(NAME)
		@echo "Folder cleanup successful"

re : fclean all