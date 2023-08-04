CC=gcc
CFLAGS=-Wall

all: cjpeg_transupp

cjpeg_transupp: cjpeg_transupp.o
	$(CC) $(CFLAGS) -o cjpeg_transupp cjpeg_transupp.o

cjpeg_transupp.o: cjpeg_transupp.c jpeglib.h
	$(CC) $(CFLAGS) -c cjpeg_transupp.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf cjpeg_transupp
