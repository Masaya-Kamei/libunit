# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 13:59:05 by mkamei            #+#    #+#              #
#    Updated: 2022/03/04 14:15:30 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath	%.c	../test_target
SRCSNAME:=	main.c ft_strlen_test.c ft_strlen.c
SRCSDIR	:=	./
SRCS	:=	$(addprefix $(SRCSDIR)/, $(SRCSNAME))

OBJSNAME:=	$(SRCSNAME:.c=.o)
OBJSDIR	:=	./
OBJS	:=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

INCLUDE	:=	-I./ -I../test_target
NAME	:=	unit_test

CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf

LIBUNITDIR			:= ../..
LIBUNITNAME 		:= unit
LIBUNITINCLUDEDIR	:= ../../includes

LIBINCLUDE	:= -I${LIBUNITINCLUDEDIR}
LIBDIR		:= -L${LIBUNITDIR}
LIBLINK		:= -l${LIBUNITNAME}
LIB			:= $(LIBINCLUDE) $(LIBDIR) $(LIBLINK)

LIBUNITTARGET	:= all
LIBUNIT			:= $(LIBUNITDIR)/libunit.a

all		:	$(NAME)

$(NAME)	:	$(LIBUNIT) $(OBJS)
			$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LIB) -o $@

$(OBJSDIR)/%.o	:	$(SRCSDIR)/%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) $(LIBINCLUDE) -o $@ -c $<

$(LIBUNIT):
			make $(LIBUNITTARGET) -C $(LIBUNITDIR)

test	:	$(NAME)
			@./$(NAME) || :

clean	:
			$(RM) $(OBJS)
			make clean -C $(LIBUNITDIR)

fclean	: 	clean
			$(RM) $(NAME)
			make fclean -C $(LIBUNITDIR)

re		:	fclean all

address	:	CFLAGS	+=	-g -fsanitize=address
address	:	re

leak	:	CC		=	/usr/local/opt/llvm/bin/clang
leak	:	CFLAGS	+=	-g -fsanitize=leak
leak	:	re

.PHONY	:	all clean fclean re address leak
