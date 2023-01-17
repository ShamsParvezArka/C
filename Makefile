CC = gcc
CFLAGS = -Wall -Wextra -ggdb
FILE = insertion_sort

output: $(FILE).c
	$(CC) -o a.out $(FILE).c $(CFLAGS)
