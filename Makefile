# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2020/01/08 13:01:59 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_FILES = ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c\
ft_putnstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putendl.c ft_putendl_fd.c\
ft_tolower.c ft_toupper.c\
ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_isupper.c\
ft_islower.c\
ft_bzero.c ft_delete.c\
ft_memalloc.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memdup.c ft_memcmp.c\
ft_memchr.c ft_memmove.c ft_memdel.c\
ft_strnew.c ft_strdel.c ft_strlen.c ft_strcmp.c ft_strncmp.c ft_strcpy.c\
ft_strncpy.c ft_strdup.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c\
ft_strclr.c ft_strsub.c ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_strcat.c\
ft_strncat.c ft_strlcat.c ft_strequ.c ft_strnequ.c ft_striter.c ft_striteri.c\
ft_strmap.c ft_strmapi.c\
ft_lstnew.c ft_lstadd.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstmap.c\
ft_lstadd_back.c ft_lstfold.c ft_lstadd_behind.c ft_lstadd_before.c\
ft_lstcount.c\
ft_atoi.c ft_itoa.c ft_itoa_base.c\
ft_absolute_nbrlen.c ft_absolute_doublelen.c ft_power.c ft_double_power.c\
get_next_line.c\
ft_printf/ft_printf.c ft_printf/buffer.c ft_printf/flags.c\
ft_printf/formatting_prep.c ft_printf/formatting.c ft_printf/ftobuf.c\
ft_printf/itobuf.c ft_printf/launcher_int.c ft_printf/launcher_double.c\
ft_printf/launcher_string.c ft_printf/launcher_n.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)
HDR_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@ar -rcs $(NAME) $^

%.o: %.c $(HDR_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -f $(OBJ_FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
