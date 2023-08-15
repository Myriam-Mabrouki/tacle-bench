CC=gcc
CFLAGS=-Wall -fpic

all: libgsm_enc.so

libgsm_enc.so: gsm_enc.o
	$(CC) -shared -o libgsm_enc.so gsm_enc.o

gsm_enc.o: gsm_enc.c data.h private.h gsm_enc.h
	$(CC) $(CFLAGS) -c gsm_enc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libgsm_enc.so
