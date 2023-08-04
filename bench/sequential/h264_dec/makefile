CC=gcc
CFLAGS=-Wall

all: h264_dec

h264_dec: h264_dec.o h264_decinput.o
	$(CC) $(CFLAGS) -o h264_dec h264_dec.o h264_decinput.o

h264_decinput.o: h264_decinput.c
	$(CC) $(CFLAGS) -c h264_decinput.c
	
h264_dec.o: h264_dec.h h264_dec.c
	$(CC) $(CFLAGS) -c h264_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf h264_dec
