# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 14:07:06 by mkamei            #+#    #+#              #
#    Updated: 2022/02/05 08:39:29 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME:=	ft_create_msg.c ft_div.c ft_is_prime.c ft_strlen.c
SRCSDIR	:=	./
SRCS	:=	$(addprefix $(SRCSDIR)/, $(SRCSNAME))

OBJSNAME:=	$(SRCSNAME:.c=.o)
OBJSDIR	:=	./objs
OBJS	:=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

INCLUDE	:=	-I./
NAME	:=	libfunc.a

CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf
AR 		:=	ar rc

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) $@ $^

$(OBJSDIR)/%.o	:	$(SRCSDIR)/%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean	:
			$(RM) $(OBJS)

fclean	: 	clean
			$(RM) $(NAME)

re		:	fclean all

address	:	CFLAGS	+=	-g -fsanitize=address
address	:	re

leak	:	CC		=	/usr/local/opt/llvm/bin/clang
leak	:	CFLAGS	+=	-g -fsanitize=leak
leak	:	re

.PHONY	:	all clean fclean re address leak
