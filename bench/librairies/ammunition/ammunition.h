#ifndef AMMUNITION_H
#define AMMUNITION_H

#define _GNU_SOURCE 
#include <sys/time.h>
#include <sys/resource.h>

#include "bits.h"
#include "arithm.h"
#include "ammunition_stdlib.h"
#include "ammunition_stdio.h"
#include "ammunition_string.h"

/*
  Forward declaration of functions
*/

void ammunition_reset_str_bits( char *str, char *s );
void ammunition_reset_str_arithm( char *str, char *s, char *d, char *e,
                                  char *g );
int ammunition_bits_test();
int ammunition_arithm_test();
void ammunition_init( void );
int ammunition_return( void );
void ammunition_main( void );
int main_ammunition( void );

#endif
