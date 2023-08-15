CC=gcc
CFLAGS=-Wall -fpic

all: libg723_enc.so

libg723_enc.so: g723_enc.o
	$(CC) -shared -o libg723_enc.so g723_enc.o

g723_enc.o: g723_enc.c g723_enc.h
	$(CC) $(CFLAGS) -c g723_enc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libg723_enc.so
