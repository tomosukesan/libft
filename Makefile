CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a 
OBJS = *.o

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c *.c

re: clean fclean all

bonus:

.PHONY: clean fclean
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)