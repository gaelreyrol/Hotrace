# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 10:34:01 by greyrol           #+#    #+#              #
#    Updated: 2013/12/13 20:16:49 by greyrol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
NAME	= hotrace

SRC 	= hotrace.c
OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Werror -Wextra -pedantic
OFLAGS	= -O3 -ggdb

RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			@$(CC)  $(CFLAGS) $(OFLAGS) -o $(NAME) $(OBJ)
			@printf 'Building binary file : %s\n' "$(NAME)"
clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

%.o:		%.c
			@$(CC) $(CFLAGS) $(OFLAGS) -c $< -o $@
			@printf 'Compiling : %s\n' "$<"

.PHONY:		all clean fclean re
