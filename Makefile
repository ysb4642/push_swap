# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seyeo <seyeo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 00:48:01 by seyeo             #+#    #+#              #
#    Updated: 2022/08/15 15:10:11 by seyeo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM 			= rm -rf

SRCS		= arr_utils.c \
			  arr.c \
			  command_rr.c \
			  command_rrr.c \
			  command_sspa.c \
			  init.c \
			  main.c \
			  sort_ratate_utils.c \
			  sort_rotate.c \
			  sort_utils.c \
			  sort.c \
			  utils.c \
			  ft_split.c
			  
OBJS		= $(SRCS:%.c=%.o)

all    : $(NAME)
.PHONY : all

$(NAME) : ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)
.PHONY: clean

fclean: clean
		$(RM) $(NAME) $(OBJS)
.PHONY: fclean

re: $(MAKE) fclean
	$(MAKE) all
.PHONY: re