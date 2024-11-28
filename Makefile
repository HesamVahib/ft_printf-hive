NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc

SRC_PART = ft_format_specifier.c\
           ft_print_hex.c\
           ft_print_nbr.c\
           ft_print_ptr.c\
           ft_print_str.c\
           ft_print_unsnbr.c\
           ft_printf.c

OBJ_PART = $(SRC_PART:.c=.o)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<
	@echo "\033[90m[\033[32mOK\033[90m]\033[34m Compiling $<\033[0m"

$(NAME): $(OBJ_PART)
	@ar rcs $(NAME) $(OBJ_PART)
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled Libft.\033[0m"

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ_PART)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

# Clean and delete the library
fclean: clean
	@/bin/rm -f $(NAME) libftprintf.a
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Libft.a and libft.so deleted.\033[0m"

re: fclean all

.PHONY: all clean fclean re
