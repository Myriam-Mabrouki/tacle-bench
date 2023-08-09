CC=gcc
CFLAGS=-Wall -fpic

all: libh264_dec.so

libh264_dec.so: h264_dec.o h264_decinput.o
	$(CC) -shared -o libh264_dec.so h264_dec.o h264_decinput.o

h264_decinput.o: h264_decinput.c
	$(CC) $(CFLAGS) -c h264_decinput.c
	
h264_dec.o: h264_dec.h h264_dec.c
	$(CC) $(CFLAGS) -c h264_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libh264_dec.so
