CC=gcc

all: ammunition

ammunition: ammunition.o ammunition_libc.o arithm.o bits.o
	$(CC) -Wall -o ammunition ammunition.o ammunition_libc.o arithm.o bits.o
	
ammunition.o: ammunition.c ammunition_stdlib.h ammunition_stdio.h ammunition_string.h arithm.h bits.h $(CFLAGS)
	$(CC) -Wall -o ammunition.o -c ammunition.c

ammunition_libc.o: ammunition_libc.c ammunition_stdlib.h ammunition_stdio.h ammunition_string.h
	$(CC) -Wall -o ammunition_libc.o -c ammunition_libc.c $(CFLAGS)
	
arithm.o: arithm.c ammunition_string.h arithm.h
	$(CC) -Wall -o arithm.o -c arithm.c $(CFLAGS)
	
bits.o: bits.c bits.h
	$(CC) -Wall -o bits.o -c bits.c $(CFLAGS)
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf ammunition
