# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacarret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 13:13:47 by dacarret          #+#    #+#              #
#    Updated: 2024/09/19 14:41:30 by dacarret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./src/ft_display_file.c

HD = ./include

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)
	chmod 755 $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean
	all
