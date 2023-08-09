CC=gcc

all: libadpcm_dec.so

libadpcm_dec.so: adpcm_dec.o
	$(CC) -shared -o libadpcm_dec.so adpcm_dec.o

adpcm_dec.o: adpcm_dec.c
	$(CC) -c -Wall -fpic adpcm_dec.o adpcm_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libadpcm_dec.so
