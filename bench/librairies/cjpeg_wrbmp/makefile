CC=gcc
CFLAGS=-Wall -fpic

all: libcjpeg_wrbmp.so

libcjpeg_wrbmp.so: cjpeg_wrbmp.o input.o
	$(CC) -shared -o libcjpeg_wrbmp.so cjpeg_wrbmp.o input.o

cjpeg_wrbmp.o: cjpeg_wrbmp.c cdjpeg.h cjpeg_wrbmp.h
	$(CC) $(CFLAGS) -c cjpeg_wrbmp.c
	
input.o: input.c
	$(CC) $(CFLAGS) -c input.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libcjpeg_wrbmp.so
