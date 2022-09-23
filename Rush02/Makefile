# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 17:31:38 by lbarrene          #+#    #+#              #
#    Updated: 2022/07/17 21:38:11 by lbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#alias
obj = ft_check_dict.o ft_return_number.o ft_is_numeric.o ft_aux.o ft_aux_str.o ft_sort_array.o ft_read_file.o main.o ft_print.o ft_putstr.o
gcc = gcc -o rush-02 
gccs = gcc -c
flags = -Wall -Wextra -Werror 
del = rm -f *.o ft_rush02.h.gch
del1 = rm -f *.o rush-02
NAME = rush-02
norm = norminette -R checkforbiddenheadersource
#this comand execute all the comp.
all: $(NAME)

norm:
	$(norm)
#esta regla compila el programa
$(NAME): $(obj)
	$(gcc) $(flags) $(obj)
#las siguientes compilan uno a uno.
main.o: main.c ft_rush02.h 

ft_return_number.o: ft_return_number.c ft_rush02.h

ft_is_numeric.o: ft_is_numeric.c ft_rush02.h 

ft_sort_array.o: ft_is_numeric.c ft_rush02.h

ft_aux.o: ft_aux.c ft_rush02.h

ft_aux_str.o: ft_aux_str.c ft_rush02.h

ft_check_dict.o: ft_check_dict.c ft_rush02.h

ft_read_file.o: ft_read_file.c ft_rush02.h

ft_print.o: ft_print.c ft_rush02.h

ft_putstr.o: ft_putstr.c ft_rush02.h

clean:
	$(del)

fclean:
	$(del1)

re:
	$(del) $(del1)

.PHONY: 
	all clean fclean re

	
