#include "lib1.h"
#include "lib_grx.h"

int main(int argc, char * argv[])
{
       if (argc != 4)
       {
                printf("\nError en la cantidad de argumentos ingresados\n");
       }
       else
       {
	       clock_t tiempo_inicio, tiempo_fin;
	       double tiempo_usado = 0;


	       char *buff;//
	       unsigned int size;
	       int met=0;//variable para convertir 


	       //lee los archivos
               buff= read_file_to_buffer (argv[2], &size);
			
	       
	       tiempo_inicio = clock(); //función para tomar reloj primer proceso.

	       //cuenta o se haya el tamaño del arreglo
	       size = t_lista(buff,size);


	       //se crea el arreglo que se va a llenar con los números
               double lista[size];
	       pas_buffer(buff,size,&lista[0]);

	       tiempo_fin = clock();
	       tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

               printf ("El tiempo de ejecución del programa es: %f\n", tiempo_usado);
		

	       met=atoi(argv[1]);
               if (met==1)
               {
		       tiempo_inicio = clock(); //función para tomar reloj del algoritmo de inseción.
                       insercion (&lista[0],size);
                      
               }
               else if (met==2)
               {
		       tiempo_inicio = clock(); //función para tomar reloj del algoritmo de inseción.
		       burbuja (&lista[0],size);
               }
	       else            
               {
                       printf("No se presenta ningún método. Recuerda (1):Método inserción,(2):Método Burbuja");
		       exit(1);
               }
	       tiempo_fin = clock();
               tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

               printf ("El tiempo de ejecución del algoritmo de ordenamiento es: %f\n", tiempo_usado);


	       free_buffer_mem(buff);
		tiempo_inicio = clock(); //función para tomar reloj que se demora el archivo en guardar       
	       write_dArray_to_file (&lista[0],size, argv[3]);

	       tiempo_fin = clock();
               tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

               printf ("El tiempo que se demora en guardar el archivo es: %f\n", tiempo_usado);

	      
       }
 return 0;
}



























































































































