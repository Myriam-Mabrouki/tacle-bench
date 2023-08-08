CC=gcc

all: fmref

fmref: fmref.o wcclibm.o
	$(CC) -Wall -o fmref fmref.o wcclibm.o
	
fmref.o: fmref.c wcclibm.h 
	$(CC) -Wall -c fmref.c
	
wcclibm.o: wcclibm.c wcclibm.h math_private.h
	$(CC) -Wall -c wcclibm.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf fmref
