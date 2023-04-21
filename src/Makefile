### Variables ###
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlen.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
		ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_calloc.c ft_putchar_fd.c \
		ft_putstr_fd.c

OBJS = $(FILES:.c=.o) # generates the same FILES list whith the .o extension 

### Script ###
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY:	all clean fclean re