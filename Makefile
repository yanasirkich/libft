# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 14:23:39 by ysirkich          #+#    #+#              #
#    Updated: 2024/05/06 12:51:27 by ysirkich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

CC	=	gcc

CFILES	=	ft_calloc	ft_isascii	ft_memchr	ft_memmove	ft_strdup	\
         ft_strlen	ft_tolower	ft_atoi	ft_isalnum	ft_isdigit	\
         ft_memcmp	ft_memset	ft_strlcat	ft_strnstr	ft_toupper	\
         ft_bzero	ft_isalpha	ft_isprint	ft_memcpy	ft_strchr	\
         ft_strlcpy	ft_strrchr	ft_strncmp	ft_strtrim	ft_putchar_fd	\
		 ft_putendl_fd	ft_putnbr_fd	ft_putstr_fd	ft_substr	\
		 ft_strjoin	ft_split	ft_itoa	ft_strmapi	ft_striteri

BONUSFILES	=	ft_lstnew	ft_lstadd_front	ft_lstsize	ft_lstlast	ft_lstadd_back	\
				ft_lstdelone	ft_lstclear

CFLAGS	=	-Wall	-Werror	-Wextra

AR	=	ar	rcs
RM	=	rm	-f

SRC_DIR	=	./
SRC	=	$(addprefix	$(SRC_DIR),	$(addsuffix	.c,	$(CFILES)))
BONUSSRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUSFILES)))

OBJ_DIR	=	./
OBJ	=	$(addprefix	$(OBJ_DIR),	$(addsuffix	.o,	$(CFILES)))
BONUSOBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUSFILES)))

$(NAME):	$(OBJ)
	$(AR)	$@	$^
%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUSOBJS)
	$(AR) $(NAME) $^

all:	$(NAME)
clean:
	$(RM)	$(OBJ) $(BONUSOBJS)
fclean: clean
	$(RM)	$(NAME)
re:	fclean all
.PHONY:	all	clean	fclean	re	bonus