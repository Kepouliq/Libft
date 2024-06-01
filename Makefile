SRCS = ft_atoi.c \
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		
NAME = libft.a

INCLUDE = libft.h

CCFLAGS = cc -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o: 
	${CCFLAGS} -I ${INCLUDE} -c $< -o $(<:.c=.o)

clean: 
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all 

.PHONY: all clean fclean re