# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 12:34:59 by pleoma            #+#    #+#              #
#    Updated: 2021/10/12 11:46:08 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC =   ft_isalpha.c		ft_toupper.c		ft_substr.c			ft_lstnew.c\
		ft_isdigit.c		ft_tolower.c		ft_strjoin.c		ft_lstadd_front.c\
		ft_isalnum.c		ft_strchr.c			ft_strtrim.c		ft_lstsize.c\
		ft_isascii.c		ft_strrchr.c		ft_split.c			ft_lstlast.c\
		ft_isprint.c		ft_strncmp.c		ft_itoa.c			ft_lstadd_back.c\
		ft_strlen.c			ft_memchr.c			ft_strmapi.c		ft_lstdelone.c\
		ft_memset.c			ft_memcmp.c			ft_striteri.c		ft_lstclear.c\
		ft_bzero.c			ft_strnstr.c		ft_putchar_fd.c\
		ft_memcpy.c			ft_atoi.c			ft_putstr_fd.c\
		ft_memmove.c							ft_putendl_fd.c\
		ft_strlcpy.c		ft_calloc.c			ft_putnbr_fd.c\
		ft_strlcat.c		ft_strdup.c\

OBJ = $(patsubst %.c,%.o,$(SRC))
HEADER = libft.h

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs ${NAME} $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm  -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re