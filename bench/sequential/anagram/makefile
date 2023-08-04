CC=gcc
CFLAGS=-Wall

all: anagram

anagram: anagram.o anagram_input.o anagram_stdlib.o
	$(CC) $(CFLAGS) -o anagram anagram.o anagram_input.o anagram_stdlib.o

anagram.o: anagram.c anagram_ctype.h anagram_stdlib.h anagram_strings.h anagram_compare.h
	$(CC) $(CFLAGS) -c anagram.c

anagram_input.o: anagram_input.c
	$(CC) $(CFLAGS) -c anagram_input.c

anagram_stdlib.o: anagram_stdlib.c anagram_stdlib.h anagram_strings.h anagram_compare.h
	$(CC) $(CFLAGS) -c anagram_stdlib.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf anagram
