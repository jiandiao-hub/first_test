CC = gcc
CFLAGS = -Wall -Wextra -g

OBJS = main.o add.o
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

main.o: main.c add.h
	$(CC) $(CFLAGS) -c main.c

add.o: add.c add.h
	$(CC) $(CFLAGS) -c add.c

clean:
	rm -f $(OBJS) $(EXEC)
