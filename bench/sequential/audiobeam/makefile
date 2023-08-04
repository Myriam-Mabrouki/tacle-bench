CC=gcc
CFLAGS=-Wall

all: audiobeam

audiobeam: audiobeam.o audiobeaminput.o audiobeamlibm.o audiobeamlibmalloc.o
	$(CC) $(CFLAGS) -o audiobeam audiobeam.o audiobeaminput.o audiobeamlibm.o audiobeamlibmalloc.o

audiobeaminput.o: audiobeaminput.c
	$(CC) $(CFLAGS) -c audiobeaminput.c
	
audiobeam.o: audiobeam.c audiobeam.h audiobeamlibm.h audiobeamlibmalloc.h
	$(CC) $(CFLAGS) -c audiobeam.c
	
audiobeamlibm.o: audiobeamlibm.c audiobeamlibm.h audiobeamlibmath.h
	$(CC) $(CFLAGS) -c audiobeamlibm.c
	
audiobeamlibmalloc.o: audiobeamlibmalloc.c audiobeamlibmalloc.h
	$(CC) $(CFLAGS) -c audiobeamlibmalloc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf audiobeam
