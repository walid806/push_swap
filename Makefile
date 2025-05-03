FILE = push_swap.c handlin.c splite.c object.c ft_node.c is_doblicat.c push_to_b.c ruls_push.c ruls.c  sort_test.c sort_3_5.c free_stack.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

obj = $(FILE:.c=.o)

NAME = push_swap

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c 
	$(CC) $(CFLAGS) -c $^ -o $@

clean : 
	$(RM) $(obj)

fclean: clean
	$(RM) $(NAME)

re: fclean all
