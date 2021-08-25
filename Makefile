CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FILES = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
	ft_toupper.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_bzero.c \
	ft_memset.c ft_memcpy.c ft_memcmp.c ft_strncmp.c ft_memchr.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c

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

.PHONY: all clean fclean re
