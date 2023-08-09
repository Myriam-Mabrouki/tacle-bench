CC=gcc
CFLAGS=-Wall -fpic

all: libpetrinet.so

libpetrinet.so: petrinet.o
	$(CC) -shared -o libpetrinet.so petrinet.o

petrinet.o: petrinet.c
	$(CC) $(CFLAGS) -c petrinet.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libpetrinet.so
