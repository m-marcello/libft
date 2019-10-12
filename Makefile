# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2019/10/12 19:45:31 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = ft_putchar ft_putchar_fd ft_putstr ft_putstr_fd ft_putnstr_fd\
ft_putnbr ft_putnbr_fd ft_putendl ft_putendl_fd\
ft_tolower ft_toupper\
ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_isascii ft_isupper ft_islower\
ft_bzero ft_delete\
ft_memalloc ft_memset ft_memcpy ft_memccpy ft_memdup ft_memcmp ft_memchr\
ft_memmove ft_memdel\
ft_strnew ft_strdel ft_strlen ft_strcmp ft_strncmp ft_strcpy ft_strncpy\
ft_strdup ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strclr ft_strsub\
ft_strsplit ft_strtrim ft_strjoin ft_strcat ft_strncat ft_strlcat ft_strequ\
ft_strnequ ft_striter ft_striteri ft_strmap ft_strmapi\
ft_lstnew ft_lstadd ft_lstdelone ft_lstdel ft_lstiter ft_lstmap ft_lstadd_back\
ft_lstfold ft_lstadd_behind ft_lstadd_before ft_lstcount\
ft_atoi ft_itoa ft_itoa_base\
ft_absolute_nbrlen ft_absolute_doublelen ft_power ft_double_power\
get_next_line\
ft_printf/ft_printf ft_printf/buffer ft_printf/flags ft_printf/formatting_prep\
ft_printf/formatting ft_printf/ftobuf ft_printf/itobuf ft_printf/launcher_int\
ft_printf/launcher_double ft_printf/launcher_string ft_printf/launcher_n


SRC = $(FUNCTIONS:%=%.c)

OBJ = $(FUNCTIONS:%=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all