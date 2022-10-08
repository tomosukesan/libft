CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = Libft
OBJS = *.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o Libft $^

.c.o:
	$(CC) $(CFLAGS) -c *.c

re: clean fclean all

.PHONY: clean fclean
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)