CC=gcc
CFLAGS=-Wall -fpic

all: libhuff_dec.so

libhuff_dec.so: huff_dec.o
	$(CC) -shared -o libhuff_dec.so huff_dec.o

huff_dec.o: huff_dec.c
	$(CC) $(CFLAGS) -c huff_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libhuff_dec.so
