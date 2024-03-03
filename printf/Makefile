
NAME = libftprintf.a
CC = cc
COMP_FLAGS = -Wall -Werror -Wextra

SRCS = 	ft_tools.c				\
		ft_output_char.c		\
		ft_pointer.c			\
		ft_printf.c				\
		ft_puthex.c				\
		ft_putstr.c				\
		ft_unsigned.c			\
		ft_output_int.c 		\

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) -c $(COMP_FLAGS) $?

re: fclean all

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY:			all clean fclean re