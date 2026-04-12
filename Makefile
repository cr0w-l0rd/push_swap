# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 13:39:08 by mbiusing          #+#    #+#              #
#    Updated: 2026/04/07 16:32:27 by mbiusing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name of static library

NAME =		push_swap.a

SRC =		meow

# automatic substitution

OBJ 		= $(SRC:.c=.o)

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
AR 			= ar -rcs
RM 			= rm -f

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

# make - builds library ( objs + libft.a ) #

all: $(NAME)

# create libft.a by archiving object files

$(NAME): $(OBJ)
	@echo "Compiling..."
	@$(AR) $(NAME) $(OBJ)
	@echo "$(NAME) has just been birthed into existence along with its fellow object files"

# make bonus #
bonus: all

# make clean - remove all object files #

clean:
	@$(RM) $(OBJ)
	@echo "the object files has also just been wiped out"

# make fclean - clean + remove libft.a #

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) has also just been wiped out"

# make re - rebuild #

re: fclean all

# make test FILE=ft_strtrim

# test:
# 	@$(CC) $(CFLAGS) $(FILE).c $(NAME) -o test.out
# 	@echo "Made test for $(FILE).c..."
# 	@./test.out

.PHONY: clean fclean re all bonus #test
