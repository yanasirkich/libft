NAME =  libft.a

CC	=	gcc

CFILES	=	ft_calloc	ft_isascii	ft_memchr	ft_memmove	ft_strdup	\
         ft_strlen	ft_tolower	ft_atoi	ft_isalnum	ft_isdigit	\
         ft_memcmp	ft_memset	ft_strlcat	ft_strnstr	ft_toupper	\
         ft_bzero	ft_isalpha	ft_isprint	ft_memcpy	ft_strchr	\
         ft_strlcpy	ft_strrchr	ft_strncmp	ft_strtrim	ft_putchar_fd	\
		 ft_putendl_fd	ft_putnbr_fd	ft_putstr_fd	ft_substr	\
		 ft_strjoin	ft_split

CFLAGS	=	-Wall	-Werror	-Wextra

AR	=	ar	rcs
RM	=	rm	-f

SRC_DIR	=	./
SRC	=	$(addprefix	$(SRC_DIR),	$(addsuffix	.c,	$(CFILES)))

OBJ_DIR	=	./
OBJ	=	$(addprefix	$(OBJ_DIR),	$(addsuffix	.o,	$(CFILES)))

$(NAME):	$(OBJ)
	$(AR)	$@	$^
%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)
clean:
	$(RM)	$(OBJ)
fclean: clean
	$(RM)	$(NAME)
re:	fclean all
.PHONY:	all	clean	fclean	re