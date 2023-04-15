### Variables ###
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlen.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strlcpy.c 

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