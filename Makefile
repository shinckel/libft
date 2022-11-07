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
SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii\
ft_isprint ft_toupper ft_tolower ft_memset\
ft_bzero ft_strlen ft_memcpy ft_memmove\
ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_strdup\
ft_calloc ft_atoi ft_substr ft_strjoin  ft_strtrim ft_putchar_fd\
ft_putstr_fd ft_putendl_fd\
	
CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)