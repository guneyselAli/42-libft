SRCS	=	ft_atoi.c	ft_isprint.c	ft_putchar_fd.c	ft_striteri.c	ft_strnstr.c \
			ft_bzero.c	ft_itoa.c	ft_putendl_fd.c	ft_strjoin.c	ft_strrchr.c \
			ft_calloc.c	ft_memchr.c	ft_putnbr_fd.c	ft_strlcat.c	ft_strtrim.c \
			ft_isalnum.c	ft_memcmp.c	ft_putstr_fd.c	ft_strlcpy.c	ft_substr.c \
			ft_isalpha.c	ft_memcpy.c	ft_split.c	ft_strlen.c	ft_tolower.c \
			ft_isascii.c	ft_memmove.c	ft_strchr.c	ft_strmapi.c	ft_toupper.c \
			ft_isdigit.c	ft_memset.c	ft_strdup.c	ft_strncmp.c
OBJS    =   $(SRCS:.c=.o)
B_SRCS	=	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c ft_lstlast.c	ft_lstadd_back.c
B_OBJS	=	$(B_SRCS:.c=.o)
NAME    =   libft.a
FLAGS   =   -Werror -Wall -Wextra
all: $(NAME)
$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean
bonus:
		gcc -c $(FLAGS) $(B_SRCS) $(SRCS)
		ar rcs $(NAME) $(B_OBJS) $(OBJS)
bclean:
	rm -f $(B_OBJS)
.PHONY: all fclean re clean bonus















