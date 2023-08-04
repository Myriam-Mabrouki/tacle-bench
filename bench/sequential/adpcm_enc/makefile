all: adpcm_enc

adpcm_dec: adpcm_enc
	gcc -Wall -o adpcm_enc adpcm_enc.c
	
clean:
	rm -rf *.o
	
cleanall: clean
	rm -rf adpcm_enc
