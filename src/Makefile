NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c
OBJS = $(FILES:.c=.o) # generates the same FILES list whith the .o extension 

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY:	all clean fclean re