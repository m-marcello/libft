# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2020/01/09 17:59:54 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include mini_srcs

NAME := libft.a
OBJS := $(MINI_SOURCES:%=%.o)
HDRS := libft.h
CFLAGS := -Wall -Wextra -Werror

PLUS = \033[38;5;40m+\033[0;00m
MINUS = \033[38;5;160m-\033[0;00m

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $^
	@echo " ${PLUS} $@"

%.o: %.c $(HDRS)
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -fv $(OBJS) | sed -E $$'s/(.*)/ $(MINUS) \\1/g'

fclean: clean
	@rm -fv $(NAME)
	@echo " ${MINUS} ${NAME}"

re: fclean all

.PHONY: all clean fclean re
