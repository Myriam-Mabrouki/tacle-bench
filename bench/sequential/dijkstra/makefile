CC=gcc
CFLAGS=-Wall

all: dijkstra

dijkstra: dijkstra.o input.o
	$(CC) $(CFLAGS) -o dijkstra dijkstra.o input.o

dijkstra.o: dijkstra.c input.h
	$(CC) $(CFLAGS) -c dijkstra.c
	
input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf dijkstra
