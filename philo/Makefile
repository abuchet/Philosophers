# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 11:02:07 by abuchet           #+#    #+#              #
#    Updated: 2023/10/09 14:35:11 by abuchet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g -pthread
RM		=	rm -rf

SRC		=	init.c \
			main.c \
			philoacts.c \
			philocontrol.c \
			timeutils.c \
			utils.c \
			
OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all



.PHONY: all clean fclean re