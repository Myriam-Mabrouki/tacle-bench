CC=gcc
CFLAGS=-Wall -fpic

all: libndes.so

libndes.so: ndes.o
	$(CC) -shared -o libndes.so ndes.o

ndes.o: ndes.c ndes.h
	$(CC) $(CFLAGS) -c ndes.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libndes.so
