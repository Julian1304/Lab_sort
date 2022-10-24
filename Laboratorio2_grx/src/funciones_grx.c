#include "lib1.h"//libreria creada
#include "lib_grx.h"//liberia creada

void insercion(double*a,unsigned int  size)//algoritmo de ordenamiento de inserción 
{
  int i=0;
  int j=0;
  double key=0;
  for (j=1;j<(size);j++)
  {
      key=a[j];
      i=j-1;
      while(i>=0 && a[i]>key)
      {
          a[i+1]=a[i];
          i=i-1;
      }
      a[i+1]=key;
  }
}

void burbuja(double*a,unsigned int  size)//algoritmo de ordenamiento de burbuja
{

  int i=0;
  int j=0;
  for (i=0;i<(size)-1;i++)
  {
      for(j=(size)-1;j>i;j--)
      {
          if(a[j]<a[j-1])
          {
            swap(&a[j],&a[j-1]);//se usa la función swap para intercambiar valores 
          }
      }
  }
}


void swap(double*a,double*b)//función de intercambio
  {
      int temp=0;
      temp=*a;
      *a=*b;
      *b=temp;
  }
	
void pas_buffer( char *buf_lis,unsigned int length, double *a) //convierte el buffer a double
{

    char *pos;
    char *key;
    double num;
    unsigned int j;
    key = buf_lis;

   for(j = 0; j < length; j++)
    {
        pos = strchr(key, '\n');
        num = atof(key);
        key = pos+1;
        a[j] = num;
    }

}

unsigned int t_lista(char *buf_addr, unsigned int size)// halla la cantidad de números que se debe guardar
{
	unsigned int j;
	unsigned int cont=0;
		for(j=0;j<size;j++)
		{
			if (buf_addr[j]=='\n')
			{
			cont=cont+1;
			}
		}
	return (cont);
}




