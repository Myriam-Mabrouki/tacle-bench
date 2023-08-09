CC=gcc

all: libadpcm_enc.so

libadpcm_enc.so: adpcm_enc.o
	$(CC) -shared -o libadpcm_enc.so adpcm_enc.o

adpcm_enc.o: adpcm_enc.c
	$(CC) -c -Wall -fpic adpcm_enc.o adpcm_enc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libadpcm_enc.so
