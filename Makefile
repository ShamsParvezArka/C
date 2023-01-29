CC     = gcc
CFLAGS = -Wall -Wextra -ggdb -std=c11 -lm
FILE   = template.c

output: $(FILE)
	$(CC) -o a.out $(FILE) $(CFLAGS)
