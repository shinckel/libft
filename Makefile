# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shinckel <shinckel@student.42lisboaom    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 16:56:57 by shinckel          #+#    #+#              #
#    Updated: 2022/10/31 16:59:50 by shinckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

BONUS = $(wildcard bonus/*.c)
BONUS_OBJ = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -Iheader -g
#CFLAGS += -fsanitize=address

# Define colors
RED := \033[1;41m
GREEN := \033[1;42m
RESET := \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(GREEN) Libft compiled $(RESET)"

bonus: $(OBJ) $(BONUS_OBJ)
	@ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "$(GREEN) Libft & bonus compiled $(RESET)"

clean:

fclean: clean
	@$(RM) $(OBJ) $(BONUS_OBJ) $(NAME)
	@echo "$(RED) Remove objects & $(NAME) $(RESET)"

re: fclean all

.PHONY: all bonus clean fclean re
