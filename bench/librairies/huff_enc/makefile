CC=gcc
CFLAGS=-Wall -fpic

all: libhuff_enc.so

libhuff_enc.so: huff_enc.o
	$(CC) -shared -o libhuff_enc.so huff_enc.o

huff_enc.o: huff_enc.c huff_enc.h
	$(CC) $(CFLAGS) -c huff_enc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libhuff_enc.so
