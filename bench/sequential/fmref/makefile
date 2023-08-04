all: fmref

fmref: fmref.o wcclibm.o
	gcc -Wall -o fmref fmref.o wcclibm.o
	
fmref.o: fmref.c wcclibm.h 
	gcc -Wall -c fmref.c
	
wcclibm.o: wcclibm.c wcclibm.h math_private.h
	gcc -Wall -c wcclibm.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf fmref
