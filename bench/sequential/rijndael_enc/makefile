CC=gcc
CFLAGS=-Wall

all: rijndael_enc

rijndael_enc: rijndael_enc.o rijndael_enc_libc.o aes.o input_small.o
	$(CC) $(CFLAGS) -o rijndael_enc rijndael_enc.o rijndael_enc_libc.o aes.o input_small.o
	
rijndael_enc.o: rijndael_enc.c rijndael_enc_libc.h aes.h
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
	rm -rf rijndael_enc
