SRC = src/test.c src/ft_malloc.c src/ft_free.c
OBJ = test.o ft_malloc.o ft_free.o
LIB = include/libft/libft.a
CC = clang
FLAGS = -g -Wall -Wextra -Werror

%o: src/%c
	$(CC) -c $(FLAGS) $<

test: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@ $(LIB)

libft:
	cd include/libft && make

clean:
	rm *.o

fclean:
	cd include/libft && make fclean
	rm test

re: clean test
