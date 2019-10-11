# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2019/07/04 16:47:38 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = ft_atoi ft_putchar ft_putchar_fd ft_putnbr ft_putnbr_fd ft_putendl\
ft_putendl_fd ft_putstr ft_putstr_fd ft_strcmp ft_tolower ft_toupper ft_strncmp\
ft_itoa ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_isascii ft_bzero\
ft_memset ft_memcpy ft_strlen ft_memchr ft_memccpy ft_memcmp ft_memmove\
ft_memalloc ft_memdel ft_strcat ft_strncat ft_strlcat ft_strtrim ft_strcpy\
ft_strncpy ft_strdup ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strnew\
ft_strdel ft_strclr ft_strjoin ft_strequ ft_strnequ ft_striter ft_striteri\
ft_strmap ft_strmapi ft_strsub ft_strsplit ft_lstnew ft_lstadd ft_lstdelone\
ft_lstdel ft_lstiter ft_lstmap\
ft_get_decimals ft_power ft_isupper ft_islower ft_lstadd_back ft_memdup\
ft_delete ft_lstfold ft_lstadd_behind ft_lstadd_before ft_lstcount ft_itoa_base\
ft_nbrlen_unsigned

SRC = $(FUNCTIONS:%=%.c)

OBJ = $(FUNCTIONS:%=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all