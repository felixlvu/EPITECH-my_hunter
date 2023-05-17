##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC = ./src/main.c \
	  ./src/flag_h.c \
	  ./src/my_strcmp.c \
	  ./src/start_hunter.c \
	  ./src/set_textures.c \
	  ./src/duck.c \
	  ./src/event.c \
	  ./src/all_menu.c \
	  ./src/print_life.c \
	  ./src/draw_menu.c \
	  ./src/init_hunter.c \
	  ./src/event_all_menu.c \
	  ./src/my_itoa.c \
	  ./src/my_strcpy.c \
	  ./src/print_counter.c \
	  ./src/destroy_hunter.c \

OBJ = $(SRC:.c=.o)

CSFML = -lcsfml-graphics -lcsfml-window -lcsfml-system

CFLAGS = -I ./include/ -W -Wall -Wextra

NAME = my_hunter

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(CSFML)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:	CFLAGS += -g3
debug:	re
