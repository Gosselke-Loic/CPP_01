# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 10:20:43 by lgosselk          #+#    #+#              #
#    Updated: 2024/03/28 13:32:03 by lgosselk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ./sed_is_for_losers test.txt "this is a test for nuclear weapon" "this is a joke"

NAME		=	sed_is_for_losers

DEFAULT		=	\033[0m
RED			=	\033[1;31m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
HEADERS		=	

OBJS_DIR	=	objs/

FILES		=	main

SRCS		=	$(addsuffix .cpp, $(FILES))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all:	$(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

$(OBJS_DIR)%.o: %.cpp $(HEADERS)
	@mkdir -p $(OBJS_DIR)
	@echo "$(YELLOW)$< en compilation!$(DEFAULT)"
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) test.txt
	@echo "$(RED)all deleted!$(DEFAULT)"

test:
	@touch test.txt
	@echo "this is a test for nuclear weapon and this text will be strictly confidencial" > test.txt;

re:		fclean all

.PHONY:		all clean fclean re test