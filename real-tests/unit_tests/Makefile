# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 12:44:12 by mkamei            #+#    #+#              #
#    Updated: 2021/10/07 13:40:44 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME:=	main.c \
			atoi/00_lancher.c atoi/01_basic.c atoi/02_space.c atoi/03_spaces.c \
			atoi/04_sign.c atoi/05_signs.c atoi/06_int_max.c atoi/07_int_min.c \
			atoi/08_long_max.c atoi/09_long_min.c atoi/10_zero_zero.c \
			atoi/11_null_term.c \
			bzero/00_lancher.c bzero/01_basic.c \
			calloc/00_lancher.c calloc/01_basic.c \
			isalnum/00_lancher.c isalnum/01_basic.c isalnum/02_mod_256.c \
			memccpy/00_lancher.c memccpy/01_basic.c \
			memset/00_lancher.c memset/01_basic.c \
			strchr/00_lancher.c strchr/01_basic.c
SRCSDIR	:=	./srcs
SRCS	:=	$(addprefix $(SRCSDIR)/, $(SRCSNAME))

OBJSNAME:=	$(SRCSNAME:.c=.o)
OBJSDIR	:=	./objs
OBJS	:=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

INCLUDE	:=	-I./includes
NAME	:=	unit_test

CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf

LIBFTDIR			:= ../libft
LIBFTNAME 			:= ft
LIBFTINCLUDEDIR 	:= ../libft

LIBUNITDIR			:= ../../framework
LIBUNITNAME 		:= unit
LIBUNITINCLUDEDIR	:= ../../framework/includes

LIBINCLUDE	:= -I${LIBFTINCLUDEDIR} -I${LIBUNITINCLUDEDIR}
LIBDIR		:= -L${LIBFTDIR} -L${LIBUNITDIR}
LIBLINK		:= -l${LIBFTNAME} -l${LIBUNITNAME}
LIB			:= $(LIBINCLUDE) $(LIBDIR) $(LIBLINK)

LIBFTTARGET		:= all
LIBFT			:= $(LIBFTDIR)/libft.a

LIBUNITTARGET	:= all
LIBUNIT			:= $(LIBUNITDIR)/libunit.a

all		:	$(NAME)

$(NAME)	:	$(LIBFT) $(LIBUNIT) $(OBJS)
			$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LIB) -o $@

$(OBJSDIR)/%.o	:	$(SRCSDIR)/%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) $(LIBINCLUDE) -o $@ -c $<

$(LIBFT):
			make $(LIBFTTARGET) -C $(LIBFTDIR)

$(LIBUNIT):
			make $(LIBUNITTARGET) -C $(LIBUNITDIR)

test	:	$(NAME)
			./$(NAME) || :

clean	:
			$(RM) $(OBJS)
			make clean -C $(LIBFTDIR)
			make clean -C $(LIBUNITDIR)

fclean	: 	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFTDIR)
			make fclean -C $(LIBUNITDIR)

re		:	fclean all

debug	:	CFLAGS += -g -fsanitize=address
debug	:	re

.PHONY	:	all clean fclean re debug
