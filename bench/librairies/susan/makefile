CC=gcc
CFLAGS=-Wall -fpic

all: libsusan.so

libsusan.so: input.o susan.o wccfile.o wcclibm.o wccmalloc.o
	$(CC) -shared -o libsusan.so input.o susan.o wccfile.o wccmalloc.o wcclibm.o
	
susan.o: susan.c wcclibm.h wccfile.h wccmalloc.h susan.h
	$(CC) $(CFLAGS) -c susan.c
	
input.o: input.c
	$(CC) $(CFLAGS) -c input.c
	
wcclibm.o: wcclibm.c wcclibm.h math_private.h
	$(CC) $(CFLAGS) -c wcclibm.c

wccfile.o: wccfile.c wccfile.h
	$(CC) $(CFLAGS) -c wccfile.c
	
wccmalloc.o: wccmalloc.c wccmalloc.h
	$(CC) $(CFLAGS) -c wccmalloc.c
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libsusan.so
