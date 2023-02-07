NAME    =   libftprintf.a
CC      =	gcc
FLAGS   =	-Wall -Werror -Wextra
RM      =	rm -rf
OBJ     =   $(SRC:.c=.o)
LIB_MAKE =	$(MAKE) -C ./libft all
SRC     =	ft_printf.c \

$(NAME): $(OBJ)
		$(LIB_MAKE)
		ld -r -o $@ $(OBJ) ./libft/libft.a

libft :
		$(MAKE) -C ./libft all

%.o : %.c
	$(CC) $(FLAGS) -c $^ -o $@

all: $(NAME)

clean:
	$(MAKE) -C ./libft clean
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY:		all clean fclean re