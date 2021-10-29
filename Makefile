SRCSNAME:=	load.c lanch.c user_utils.c utils/list.c utils/utils.c
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

# Use llvm clang
# For Macos, https://stackoverflow.com/questions/53456304/mac-os-leaks-sanitizer

address	:	CC		=	clang
address	:	CFLAGS	+=	-g -fsanitize=address
address	:	re

leak	:	CC		= 	clang
leak	:	CFLAGS	+=	-g -fsanitize=leak
leak	:	re

.PHONY	:	all clean fclean re address leak
