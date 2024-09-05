COMPILER = gcc
FLAGS = -Wall -Wextra -Werror -I ./includes

SOURCES = main.c

OBJECTS_NAME = $(SOURCES:.c=.o)
OBJECTS_PATH = ./obj/
OBJECTS = $(addprefix $(OBJECTS_PATH), $(OBJECTS_NAME))

NAME = amc-parser

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJECTS)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
