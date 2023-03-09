##
## EPITECH PROJECT, 2022
## bsq
## File description:
## bsq
##


NAME	= bsq

CC	= gcc -g

RM	= rm -f

SRCS	=	./src/main.c \
			./src/algorythme.c \
			./src/switch_int_to_char.c \
			./src/files_actions.c \
			./src/print_map.c \
			./src/check_and_search.c \
			./src/utils.c \
			./src/switch_map_to_array.c \
			./src/switch_map_for_algo.c \


OBJS	= $(SRCS:.c=.o)


CFLAGS = -I ./include/

all: $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
