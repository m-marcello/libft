# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2020/01/08 16:51:56 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include mini_srcs

NAME = libft.a
OBJS = $(MINI_SOURCES:%=%.o)
HDRS = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $^

%.o: %.c $(HDRS)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
