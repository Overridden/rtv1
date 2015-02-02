##
## Makefile for rtv1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
## 
## Made by alexandre1 nguyen
## Login   <nguye_1@epitech.net>
## 
## Started on  Thu Feb 28 11:46:24 2013 alexandre1 nguyen
## Last update Sun Mar 17 15:27:01 2013 alexandre1 nguyen
##

NAME=		rtv1

SRCS=		main.c			\
		exit.c			\
		objects.c		\
		loading_bar.c		\
		termcap_func.c		\
		parsing_tools.c		\
		mlx_basic_func.c	\
		parsing_tools_next.c	\
		init_and_tools.c	\
		calc.c			\
		allocation_tools.c

OBJS		= $(SRCS:.c=.o)

RM		= rm -f

# CFLAGS		= -Wall -W -pedantic -Werror -Wextra

$(NAME):	$(OBJS)
		cc $(OBJS) -o $(NAME) -lmlx  -lXext -lX11 -lmy -L. -lm -ltermcap

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
