CC=gcc
CFLAGS=-Wall

all: rijndael_dec

rijndael_dec: rijndael_dec.o rijndael_dec_libc.o aes.o input_small_enc.o
	$(CC) $(CFLAGS) -o rijndael_dec rijndael_dec.o rijndael_dec_libc.o aes.o input_small_enc.o
	
rijndael_dec.o: rijndael_dec.c rijndael_dec_libc.h aes.h
	$(CC) $(CFLAGS) -c rijndael_dec.c

rijndael_dec_libc.o: rijndael_dec_libc.c rijndael_dec_libc.h
	$(CC) $(CFLAGS) -c rijndael_dec_libc.c

input_small_enc.o: input_small_enc.c
	$(CC) $(CFLAGS) -c input_small_enc.c

aes.o: aes.c aes.h aestab.h
	$(CC) $(CFLAGS) -c aes.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf rijndael_dec
