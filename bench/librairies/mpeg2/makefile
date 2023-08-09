CC=gcc
CFLAGS=-Wall -fpic

all: libmpeg2.so

libmpeg2.so: mpeg2.o
	$(CC) -shared -o libmpeg2.so mpeg2.o

mpeg2.o: mpeg2.c
	$(CC) $(CFLAGS) -c mpeg2.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libmpeg2.so
