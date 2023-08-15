CC=gcc
CFLAGS=-Wall -fpic

all: libammunition.so

libammunition.so: ammunition.o ammunition_libc.o arithm.o bits.o
	$(CC) -shared -o libammunition.so ammunition.o ammunition_libc.o arithm.o bits.o
	
ammunition.o: ammunition.c ammunition_stdlib.h ammunition_stdio.h ammunition_string.h arithm.h bits.h ammunition.h
	$(CC) $(CFLAGS) -o ammunition.o -c ammunition.c

ammunition_libc.o: ammunition_libc.c ammunition_stdlib.h ammunition_stdio.h ammunition_string.h
	$(CC) $(CFLAGS) -o ammunition_libc.o -c ammunition_libc.c 
	
arithm.o: arithm.c ammunition_string.h arithm.h
	$(CC) $(CFLAGS) -o arithm.o -c arithm.c
	
bits.o: bits.c bits.h
	$(CC) $(CFLAGS) -o bits.o -c bits.c 
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libammunition.so
