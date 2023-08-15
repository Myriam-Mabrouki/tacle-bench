CC=gcc
CFLAGS=-Wall -fpic

all: librijndael_enc.so

librijndael_enc.so: rijndael_enc.o rijndael_enc_libc.o aes.o input_small.o
	$(CC) -shared -o librijndael_enc.so rijndael_enc.o rijndael_enc_libc.o aes.o input_small.o
	
rijndael_enc.o: rijndael_enc.c rijndael_enc_libc.h aes.h rijndael_enc.h
	$(CC) $(CFLAGS) -c rijndael_enc.c

rijndael_enc_libc.o: rijndael_enc_libc.c rijndael_enc_libc.h
	$(CC) $(CFLAGS) -c rijndael_enc_libc.c

input_small.o: input_small.c
	$(CC) $(CFLAGS) -c input_small.c

aes.o: aes.c aes.h aestab.h
	$(CC) $(CFLAGS) -c aes.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf librijndael_enc.so


