CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strncmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrch.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_c \
BONUSSOURCES = ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_striteri.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a
AR = ar
RCS = -rcs

$(NAME): $(OBJECTS)
	$(AR) $(RCS) $(NAME) $(OBJECTS)

all: $(NAME)

clean: 
	rm -f ${OBJECTS}

bonus:
	$(NAME)
fclean: clean
	rm -f $(NAME)

re:	fclean all
.PHONY: all, clean, fclean, re