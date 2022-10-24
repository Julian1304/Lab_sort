
#ifndef LIB_GRX_H
#define LIB_GRX_H

//directivas de procesamiento
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdint.h>
#include <string.h>
#include<time.h>


//prototipos
void insercion(double*a,unsigned int  size);
void burbuja(double*a,unsigned int  size);
void swap(double*a,double*b);
void pas_buffer( char *buf_lis,unsigned int length, double *a);
unsigned int t_lista(char *buf_addr, unsigned int size);

#endif




