# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 14:08:54 by mkamei            #+#    #+#              #
#    Updated: 2021/10/13 12:49:11 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME:=	main.c \
			create_msg/00_lancher.c create_msg/01_basic.c \
			div/00_lancher.c div/01_basic.c div/02_zero.c \
			is_prime/00_lancher.c is_prime/01_basic.c is_prime/02_bigger.c \
			strlen/00_lancher.c strlen/01_basic.c strlen/02_null.c
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

LIBFUNCDIR			:= ../libfunc
LIBFUNCNAME 		:= func
LIBFUNCINCLUDEDIR 	:= ../libfunc

LIBUNITDIR			:= ../../framework
LIBUNITNAME 		:= unit
LIBUNITINCLUDEDIR	:= ../../framework/includes

LIBINCLUDE	:= -I${LIBFUNCINCLUDEDIR} -I${LIBUNITINCLUDEDIR}
LIBDIR		:= -L${LIBFUNCDIR} -L${LIBUNITDIR}
LIBLINK		:= -l${LIBFUNCNAME} -l${LIBUNITNAME}
LIB			:= $(LIBINCLUDE) $(LIBDIR) $(LIBLINK)

LIBFUNCTARGET	:= all
LIBFUNC			:= $(LIBFUNCDIR)/libfunc.a

LIBUNITTARGET	:= all
LIBUNIT			:= $(LIBUNITDIR)/libunit.a

all		:	$(NAME)

$(NAME)	:	$(LIBFUNC) $(LIBUNIT) $(OBJS)
			$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LIB) -o $@

$(OBJSDIR)/%.o	:	$(SRCSDIR)/%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) $(LIBINCLUDE) -o $@ -c $<

$(LIBFUNC):
			make $(LIBFUNCTARGET) -C $(LIBFUNCDIR)

$(LIBUNIT):
			make $(LIBUNITTARGET) -C $(LIBUNITDIR)

test	:	$(NAME)
			@./$(NAME) || :

clean	:
			$(RM) $(OBJS)
			make clean -C $(LIBFUNCDIR)
			make clean -C $(LIBUNITDIR)

fclean	: 	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFUNCDIR)
			make fclean -C $(LIBUNITDIR)

re		:	fclean all

address	:	CC		=	clang
address	:	CFLAGS	+=	-g -fsanitize=address
address	:	re

leak	:	CC		=	clang
leak	:	CFLAGS	+=	-g -fsanitize=leak
leak	:	re

.PHONY	:	all clean fclean re address leak
