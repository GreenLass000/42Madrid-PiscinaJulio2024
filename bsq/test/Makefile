NAME = test

CC = gcc

SRC = $(wildcard *.c)
INCLUDES = includes

CFLAGS = -Wall -Werror -Wextra -I$(INCLUDES)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)
