CC=gcc
CFLAGS= -Wall -Werror -g
OBJS= queue.o

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) main.c

queue.o: queue.c
	$(CC) $(CFLAGS) -c queue.c

clean:
	rm *.out *.o
