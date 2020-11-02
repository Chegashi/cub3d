# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 17:57:09 by mochegri          #+#    #+#              #
#    Updated: 2020/11/02 14:28:00 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

AR = ar

NAME = cub.a

flags = -Wall -Wextra -Werror

SRCS = main.c

BSRCS = 

all : $(NAME)

$(NAME):
	gcc   -Wall -Wextra -Werror -I /usr/local/include   main.c -L ../resources/  -lmlx -framework opengl -framework appkit

bonus:


clean: 
	rm -rf *.o

fclean: clean
	

re: fclean all