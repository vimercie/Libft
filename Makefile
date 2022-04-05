SRCFILES=	ft_isalnum.c			\
            ft_isalpha.c			\
            ft_isascii.c			\
            ft_isdigit.c			\
            ft_isprint.c			\
            ft_strlen.c				\
            ft_memset.c 			\
            ft_bzero.c				\
            ft_memcpy.c				\
            ft_memmove.c			\
            ft_strlcpy.c			\
            ft_toupper.c			\
            ft_tolower.c			\
            ft_strchr.c				\
            ft_strrchr.c			\
            ft_strncmp.c			\
			ft_memcmp.c				\
			ft_strnstr.c			\
			ft_atoi.c				\
			ft_calloc.c				\
			ft_memchr.c				\
			ft_strdup.c				\
			ft_strlcat.c			\
			ft_substr.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_strmapi.c			\
			ft_striteri.c			\
			ft_putstr_fd.c			\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_split.c				\
			ft_itoa.c				\
			get_next_line.c			\
			get_next_line_utils.c


HEADFILES=  libft.h					\
			get_next_line.h

OBJFILES=   ${SRCFILES:.c=.o}

NAME=       libft.a

CC=         gcc

FLAGS=		-Wall -Wextra -Werror

.c.o:		${OBJFILES}
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJFILES}
			ar rc ${NAME} ${OBJFILES}

all:        ${NAME}

clean: 
			rm -f ${OBJFILES}

fclean:     clean
			rm -f ${NAME}

re:         fclean all
        
.PHONY: 	all clean fclean re

# <cible> : <dependance>
# 		<commande>