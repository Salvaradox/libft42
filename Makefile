# VARUIABLES DE MAKEFILE
NAME = libft.a
FILES = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_split.c\

CC = gcc
RM = rm -f
OBJECTS = $(FILES:.c=.o)
CFLAGS = -Werror -Wall -Wextra

#REGLAS GENERALES
all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean : 
	$(RM) $(OBJECTS)
# En este caso, clean eliminará todos los archivos object .o

fclean:
	$(RM) $(NAME) $(OBJECTS)
# fclean: elimina todos los archivos objetos, binarios y sus respectibas carpetas.

re: fclean all
# re: fclean all, esto hace un re-make (como si se ejecutase make por primera vez)
.PHONY: all clean fclean re
#Prioriza las reglas del make antye posibles comandos del sistema 
#y le dice al make que estos nombres no sona rchivos