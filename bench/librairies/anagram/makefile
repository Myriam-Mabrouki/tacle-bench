CC=gcc
CFLAGS=-Wall -fpic

all: libanagram.so

libanagram.so: anagram.o anagram_input.o anagram_stdlib.o
	$(CC) -shared -o libanagram.so anagram.o anagram_input.o anagram_stdlib.o

anagram.o: anagram.c anagram_ctype.h anagram_stdlib.h anagram_strings.h anagram_compare.h
	$(CC) $(CFLAGS) -c anagram.c

anagram_input.o: anagram_input.c
	$(CC) $(CFLAGS) -c anagram_input.c

anagram_stdlib.o: anagram_stdlib.c anagram_stdlib.h anagram_strings.h anagram_compare.h
	$(CC) $(CFLAGS) -c anagram_stdlib.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf libanagram.so
