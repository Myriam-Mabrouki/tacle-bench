all: gsm_enc

gsm_enc: gsm_enc.c data.h private.h
	gcc -Wall -o gsm_enc gsm_enc.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf gsm_enc
