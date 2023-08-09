CC=gcc
CFLAGS=-Wall -fpic

all: libgsm_dec.so

libgsm_dec.so: gsm_dec.o
	$(CC) -shared -o libgsm_dec.so gsm_dec.o

gsm_dec.o: gsm_dec.c gsm.h data.h add.h private.h
	$(CC) $(CFLAGS) -c gsm_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libgsm_dec.so
