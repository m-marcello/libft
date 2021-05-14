# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/14 13:09:04 by mmarcell      #+#    #+#                  #
#    Updated: 2021/05/14 13:41:24 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include ../src/.files.mk
include ./src/.test_files.mk

OBJ := $(FILES:%.c=../obj/%.o)
TEST_OBJ := $(TEST_FILES:%.c=obj/%.o)

CFLAGS := -Wall -Wextra -Werror

HDR_PATH := ..
INCLUDES := -I $(HDR_PATH)
HDR := $(HDR_PATH)/libft.h

PLUS = $$(tput setaf 2)+$$(tput sgr0)
MINUS = $$(tput setaf 1)-$$(tput sgr0)

all: test

test: $(OBJ) $(TEST_OBJ)
	@$(CC) -o $@ $^ -lcriterion
	@echo " ${PLUS} $@"

obj/%.o: src/%.c $(HDR) | obj
	@$(CC) -c $(CFLAGS) -o $@ $(INCLUDES) $<
	@echo " ${PLUS} $@"

obj:
	@mkdir -p $@

clean:
	@rm -fv $(TEST_OBJ) | sed 's/^/ $(MINUS) /'

fclean: clean
	@rm -fv test | sed 's/^/ $(MINUS) /'

re: fclean all

.PHONY: all test clean fclean re
