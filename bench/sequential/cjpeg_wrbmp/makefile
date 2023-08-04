CC=gcc
CFLAGS=-Wall

all: cjpeg_wrbmp

cjpeg_wrbmp: cjpeg_wrbmp.o input.o
	$(CC) $(CFLAGS) -o cjpeg_wrbmp cjpeg_wrbmp.o input.o

cjpeg_wrbmp.o: cjpeg_wrbmp.c cdjpeg.h
	$(CC) $(CFLAGS) -c cjpeg_wrbmp.c
	
input.o: input.c
	$(CC) $(CFLAGS) -c input.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf cjpeg_wrbmp
