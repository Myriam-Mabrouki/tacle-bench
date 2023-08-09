CC=gcc
CFLAGS=-Wall -fpic

all: libdijkstra.so

libdijkstra.so: dijkstra.o input.o
	$(CC) -shared -o libdijkstra.so dijkstra.o input.o

dijkstra.o: dijkstra.c input.h
	$(CC) $(CFLAGS) -c dijkstra.c
	
input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libdijkstra.so
