//By Jonayne  \( ͡° ͜ʖ ͡°)/ 
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1 //Definimos a TRUE con valor 1.
#define FALSE 0 //Definimos a FALSE con valor 0.

/* 	Función que se encarga de ordenar un arreglo de tamanio num, con muchos apuntadores confusos :(.
 */
void bsort(void * base, size_t num, size_t size, int (*compar)(const void*, const void*)){
	int i=1;
	int ordenado= FALSE;
	double aux;
	if(size == 8){ //Revisamos si vamos a ordenar un arreglo de DOBLES.
		while(i < num && ordenado == FALSE){ //Repetimos este loop las veces necesarias, hasta que quede ordenado el arreglo.
			i++; //Cada iteración nos aseguramos que el último elemento ya está en su lugar, así aumentamos en 1 el valor de i.
			int ordenado= TRUE;
			for(int j= 0; j < num-1; j++){
				if((*compar)((double*)base + j, (double*)base + j + 1) > 0){ //Mandamos a llamar a la función "compar" que nos pasan, y comparamos (w0au)
					ordenado= FALSE;
					aux= *((double*)base + j);
					*((double*)base + j) = *((double*)base + j + 1);
					*((double*)base + j + 1) = aux;
				}
			} 
		}
	}else{ //Si no, entonces es de ints.
		while(i < num && ordenado == FALSE){ //Repetimos este loop las veces necesarias, hasta que quede ordenado el arreglo.
			i++; //Cada iteración nos aseguramos que el último elemento ya está en su lugar, así que aumentamos en 1 el valor de i.
			int ordenado= TRUE;
			for(int j= 0; j < num-1; j++){
				if((*compar)((int*)base + j, (int*)base + j + 1) > 0){ 
					ordenado= FALSE;
					aux= *((int*)base + j);
					*((int*)base + j) = *((int*)base + j + 1);
					*((int*)base + j + 1) = aux;
				}
			} 
		}
	}
}