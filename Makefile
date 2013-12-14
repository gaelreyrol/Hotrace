# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 10:34:01 by greyrol           #+#    #+#              #
#    Updated: 2013/12/14 15:01:10 by greyrol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
NAME	= hotrace

SRC 	= hotrace.c tree.c treeTools.c functions.c read_stdentry.c \
		  get_next_line.c ft_memalloc.c ft_strdup.c ft_strcpy.c ft_bzero.c \
		  ft_memset.c ft_strlen.c ft_memcpy.c
		  
OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Werror -Wextra -pedantic
OFLAGS	= -O3
DFLAGS  = -ggdb

RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			@$(CC)  $(CFLAGS) $(OFLAGS) $(DFLAGS) -o $(NAME) $(OBJ)
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
