NAME=libft.a
CC=gcc
CFLAGS=-Werror -Wextra -Wall
CFILES=ft_tolower.c \
	   ft_toupper.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_isalnum.c \
	   ft_isdigit.c \
	   ft_isalpha.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_strequ.c \

OFILES=${CFILES:.c=.o}

all:
	$(CC) $(CFLAGS) -c $(CFILES) 
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
