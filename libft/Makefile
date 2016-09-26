# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/25 16:25:02 by dtse              #+#    #+#              #
#    Updated: 2016/09/25 17:02:57 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft
FILENAMES	=		ft_atoi.c			\
					ft_bzero.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_memccpy.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_strcat.c			\
					ft_strchr.c			\
					ft_strcmp.c			\
					ft_strcpy.c			\
					ft_strdup.c			\
					ft_strlcat.c		\
					ft_strlen.c			\
					ft_strncat.c		\
					ft_strncmp.c		\
					ft_strncpy.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strstr.c			\
					ft_tolower.c		\
					ft_toupper.c

CC			=		gcc
CFLAGS		=		-c -Wall -Wextra -Werror
OBJS		=		$(FILENAMES:.c=.o)

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(FILENAMES)
	@ar -rc $(NAME).a $(OBJS)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
