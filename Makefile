# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2020/03/20 11:21:25 by moana         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include mini_srcs

NAME := libft.a

OBJS := $(MINI_SOURCES:%=objs/%.o)

CFLAGS := -Wall -Wextra -Werror

HDRS_PATH := .
INCLUDES := -I $(HDRS_PATH)
HDRS := $(HDRS_PATH)/libft.h

PLUS = \033[0;32m+\033[0;00m
MINUS = \033[0;31m-\033[0;00m

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $^
	@echo -e " ${PLUS} $@"

objs/%.o: srcs/%.c $(HDRS) | objs
	@$(CC) -c $(CFLAGS) -o $@ $(INCLUDES) $<
	@echo -e " ${PLUS} $@"

objs:
	@mkdir -p $@

clean:
	@rm -fv $(OBJS) | sed -e $$'s/^/ $(MINUS) /'

fclean: clean
	@rm -fv $(NAME) | sed -e $$'s/^/ $(MINUS) /'

re: fclean all

.PHONY: all clean fclean re
