# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell      #+#    #+#                  #
#    Updated: 2021/05/14 15:05:48 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include src/.files.mk

NAME := libft.a

OBJ := $(FILES:%.c=obj/%.o)

CFLAGS := -Wall -Wextra -Werror

HDR_PATH := .
INCLUDES := -I $(HDR_PATH)
HDR := $(HDR_PATH)/libft.h

PLUS = $$(tput setaf 2)+$$(tput sgr0)
MINUS = $$(tput setaf 1)-$$(tput sgr0)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $^
	@echo " ${PLUS} $@"

obj/%.o: src/%.c $(HDR) | obj
	@$(CC) -c $(CFLAGS) -o $@ $(INCLUDES) $<
	@echo " ${PLUS} $@"

obj:
	@mkdir -p $@

clean:
	@rm -rfv obj | sed "s/^/ $(MINUS) /"

fclean: clean
	@rm -fv $(NAME) | sed "s/^/ $(MINUS) /"

re:
	$(MAKE) fclean
	$(MAKE) all

test: $(OBJ) $(HDR)
	@$(MAKE) all
	@make re -C tests
	@./tests/test

.PHONY: all clean fclean re
