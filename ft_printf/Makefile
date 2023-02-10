# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 11:32:30 by pnsaka            #+#    #+#              #
#    Updated: 2023/02/10 15:23:56 by pnsaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =   libftprintf.a
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf
OBJ		=   $(SRC:.c=.o)
LIB_MAK	=	$(MAKE) -C ./libft
SRC     =	ft_printf.c \

$(NAME): $(OBJ)
		$(LIB_MAK) all
#		ar rcs $(OBJ) $(LIB_MAK)
		ld -r -o $@ $(OBJ) ./libft/libft.a

%.o : %.c
	$(CC) $(FLAGS) -c $^ -o $@

all : $(NAME)

clean:
	$(LIB_MAK) clean
	$(RM) $(OBJ)

fclean: clean
	$(LIB_MAK) fclean
	$(RM) $(NAME)
	
re: fclean all

.PHONY:		all clean fclean re