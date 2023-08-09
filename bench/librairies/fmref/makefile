CC=gcc
CFLAGS=-Wall -fpic

all: libfmref.so

libfmref.so: fmref.o wcclibm.o
	$(CC) -shared -o libfmref.so fmref.o wcclibm.o
	
fmref.o: fmref.c wcclibm.h 
	$(CC) $(CFLAGS) -c fmref.c
	
wcclibm.o: wcclibm.c wcclibm.h math_private.h
	$(CC) $(CFLAGS) -c wcclibm.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libfmref.so
