# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: narchiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 15:23:07 by narchiba          #+#    #+#              #
#    Updated: 2018/11/23 07:15:22 by narchiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../libft.a
SYS = sys_files/
RUN = ./$(SYS)/run_tests

all : run_part1

$(NAME):
	cd ../;make

run_part1: $(NAME)
	cd ../;make clean
	$(RUN) part1

run_part2: $(NAME)
	cd ../;make clean
	$(RUN) part2

run_bonus: $(NAME)
	cd ../;make clean
	$(RUN) bonus

	#t_n = test_name
	#p = part
	#t_d = test_dir
	#for example: make new_test p=part1 t_d=memcpy t_n=test1
test:
	@if [ ! -d $(p) ] ; then mkdir $(p) ; fi
	@if [ ! -d $(p)/$(t_d) ] ; then mkdir $(p)/$(t_d) ; fi
	@if [ ! -d $(p)/$(t_d)/$(t_n) ] ; then mkdir $(p)/$(t_d)/$(t_n) ; fi
	cp $(SYS)/sys_test_main.c $(SYS)/user_test_main.c $(p)/$(t_d)/$(t_n)/
