NAME = libft.a

SRC = ft_atoi.c	\
	ft_memchr.c	\
	ft_putnbr.c	\
	ft_strmapi.c	\
	ft_strsub.c	\
	ft_bzero.c	\
	ft_memcmp.c	\
	ft_putnbr_fd.c	\
	ft_strdup.c	\
	ft_strncat.c	\
	ft_strdel.c	\
	ft_strtrim.c	\
	ft_isalnum.c	\
	ft_memcpy.c	\
	ft_putstr.c	\
	ft_strequ.c	\
	ft_strncmp.c	\
	ft_tolower.c	\
	ft_isalpha.c	\
	ft_memdel.c	\
	ft_putstr_fd.c	\
	ft_striter.c	\
	ft_strncpy.c	\
	ft_toupper.c	\
	ft_isascii.c	\
	ft_memmove.c	\
	ft_sqrt.c	\
	ft_striteri.c	\
	ft_strnequ.c	\
	ft_isdigit.c	\
	ft_memset.c	\
	ft_strcat.c	\
	ft_strjoin.c	\
	ft_strnew.c	\
	ft_isprint.c	\
	ft_putchar.c	\
	ft_strchr.c	\
	ft_strlcat.c	\
	ft_strnstr.c	\
	ft_itoa.c	\
	ft_putchar_fd.c	\
	ft_strclr.c	\
	ft_strlen.c	\
	ft_strrchr.c	\
	ft_memalloc.c	\
	ft_putendl.c	\
	ft_strcmp.c	\
	ft_strlen_const.c	\
	ft_strsplit.c	\
	ft_memccpy.c	\
	ft_putendl_fd.c	\
	ft_strcpy.c	\
	ft_strmap.c	\
	ft_strstr.c	\
	ft_number.c


OBJECTS = ft_atoi.o	\
	ft_memccpy.o	\
	ft_putendl.o	\
	ft_strclr.o	\
	ft_strlcat.o	\
	ft_strnew.o	\
	ft_bzero.o	\
	ft_memchr.o	\
	ft_putendl_fd.o	\
	ft_strcmp.o	\
	ft_strlen.o	\
	ft_strnstr.o	\
	ft_isalnum.o	\
	ft_memcmp.o	\
	ft_putnbr.o	\
	ft_strcpy.o	\
	ft_strlen_const.o	\
	ft_strrchr.o	\
	ft_isalpha.o	\
	ft_memcpy.o	\
	ft_putnbr_fd.o	\
	ft_strdel.o	\
	ft_strmap.o	\
	ft_strsplit.o	\
	ft_isascii.o	\
	ft_memdel.o	\
	ft_putstr.o	\
	ft_strdup.o	\
	ft_strmapi.o	\
	ft_strstr.o	\
	ft_isdigit.o	\
	ft_memmove.o	\
	ft_putstr_fd.o	\
	ft_strequ.o	\
	ft_strncat.o	\
	ft_strsub.o	\
	ft_isprint.o	\
	ft_memset.o	\
	ft_sqrt.o	\
	ft_striter.o	\
	ft_strncmp.o	\
	ft_strtrim.o	\
	ft_itoa.o	\
	ft_putchar.o	\
	ft_strcat.o	\
	ft_striteri.o	\
	ft_strncpy.o	\
	ft_tolower.o	\
	ft_memalloc.o	\
	ft_putchar_fd.o	\
	ft_strchr.o	\
	ft_strjoin.o	\
	ft_strnequ.o	\
	ft_toupper.o	\
	ft_number.o

$(NAME):
	gcc -Wall -Wextra -Werror -c -I include/ $(SRC)
	ar rc libft.a $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
