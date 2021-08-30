CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FILES = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
	ft_toupper.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_bzero.c \
	ft_memset.c ft_memcpy.c ft_memcmp.c ft_strncmp.c ft_memchr.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
	ft_memmove.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_itoa.c

OBJ = $(FILES:c=o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re so
