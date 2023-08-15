CC=gcc
CFLAGS=-Wall -fpic

all: libepic.so

libepic.so: epic.o
	$(CC) -shared -o libepic.so epic.o

epic.o: epic.c epic.h
	$(CC) $(CFLAGS) -c epic.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libepic.so
