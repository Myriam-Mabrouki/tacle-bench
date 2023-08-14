#ifndef ADPCM_DEC_H
#define ADPCM_DEC_H

#define _GNU_SOURCE 
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <sys/time.h>
#include <sys/resource.h>

/*
  Forward declaration of functions
*/

void assign_to_CPU ( int cpuid );

void adpcm_dec_decode( int );
int adpcm_dec_filtez( int *bpl, int *dlt );
void adpcm_dec_upzero( int dlt, int *dlti, int *bli );
int adpcm_dec_filtep( int rlt1, int al1, int rlt2, int al2 );

int adpcm_dec_logscl( int il, int nbl );
int adpcm_dec_scalel( int nbl, int shift_constant );
int adpcm_dec_uppol2( int al1, int al2, int plt, int plt1, int plt2 );
int adpcm_dec_uppol1( int al1, int apl2, int plt, int plt1 );

int adpcm_dec_logsch( int ih, int nbh );
void adpcm_dec_reset();
int adpcm_dec_fabs( int n );
int adpcm_dec_cos( int n );
int adpcm_dec_sin( int n );

void adpcm_dec_init();
int adpcm_dec_return();
void adpcm_dec_main();
int main_adpcm_dec( void );

#endif
