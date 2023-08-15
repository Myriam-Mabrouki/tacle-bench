CC=gcc
CFLAGS=-Wall -fpic

all: libcjpeg_transupp.so

libcjpeg_transupp.so: cjpeg_transupp.o
	$(CC) -shared -o libcjpeg_transupp.so cjpeg_transupp.o

cjpeg_transupp.o: cjpeg_transupp.c jpeglib.h cjpeg_transupp.h
	$(CC) $(CFLAGS) -c cjpeg_transupp.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libcjpeg_transupp.so
