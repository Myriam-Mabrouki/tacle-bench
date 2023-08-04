all: gsm_dec

gsm_dec: gsm_dec.c gsm.h data.h add.h private.h
	gcc -Wall -o gsm_dec gsm_dec.c

clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf gsm_dec
