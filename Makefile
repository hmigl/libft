NAME := libft.a

OBJDIR := objdir

CFLAGS += -Iinclude -Wall -Wextra -Werror -g
ARFLAGS = rcs

vpath %.c src

OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_atoi.c ft_bzero.c ft_calloc.c ft_itoa.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	  ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	  ft_strmapi.c ft_striteri.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_checks_ext.c \
	  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_free_matrix.c \
	  ft_isnumber.c ft_atol.c

$(OBJDIR)/%.o: %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

all: $(NAME)

options:
	@echo "libft build options:"
	@echo "CFLAGS        = $(CFLAGS)"
	@echo "ARFLAGS       = $(ARFLAGS)"
	@echo "CC            = $(CC)"

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $<

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean
