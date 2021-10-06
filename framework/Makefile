SRCSNAME:=	load.c lanch.c utils/list.c utils/utils.c
SRCSDIR	:=	./srcs
SRCS	:=	$(addprefix $(SRCSDIR)/, $(SRCSNAME))

OBJSNAME:=	$(SRCSNAME:.c=.o)
OBJSDIR	:=	./objs
OBJS	:=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

INCLUDE	:=	-I./includes
NAME	:=	libunit.a

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

debug	:	CFLAGS += -g -fsanitize=address
debug	:	re

.PHONY	:	all clean fclean re debug
