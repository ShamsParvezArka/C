CC = gcc
CFLAGS = -Wall -Wextra -ggdb
FILE = bubble_sort.c

output: $(FILE)
	$(CC) -o a.out $(FILE) $(CFLAGS)
