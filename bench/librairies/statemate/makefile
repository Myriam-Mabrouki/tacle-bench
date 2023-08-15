CC=gcc
CFLAGS=-Wall -fpic

all: libstatemate.so

libstatemate.so: statemate.o
	$(CC) -shared -o libstatemate.so statemate.o

statemate.o: statemate.c statemate.h
	$(CC) $(CFLAGS) -c statemate.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libstatemate.so
