//By Jonayne  \( ͡° ͜ʖ ͡°)/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Genera un número doble entre min y max*/
double randfrom(double min, double max){
    return (((double)rand()*(max - min) / RAND_MAX) + min); //Creamos un número double aleatorio entre max y min.
}

/* 	Crea un arreglo de ints de tamanio num, que asigna números
	números aleatorios de min a max. (¡LO GUARDA EN EL HEAP!)
 */
int * arreglo_int(size_t num, int min, int max){
	time_t t;
	srand((unsigned) time(&t)); //Generador de números aleatorios.
	int * array= (int*) calloc(num, sizeof(int)); //Asignamos un trozo de memoria contigua para nuestro arreglo, se inicializa todo con tamanio de 0 bytes.
	for(int i= 0; i < num; i++){
		array[i]= rand() % (max+1 - min) + min; //Generamos un int aleatorio entre max+1 e int. (por defecto va de min a max-1) y lo guardamos en el arreglo.
	}

	return array; //Regresamos nuestro apuntador a un arreglo.
}

/* 	Crea un arreglo de doubles de tamanio num, que asigna números
	números aleatorios dobles de min a max. (¡LO GUARDA EN EL HEAP!)
 */
double * arreglo_double(size_t num, double min, double max){
	time_t t;
	srand((unsigned) time(&t)); //Generador de números aleatorios.
	double * array= (double*) calloc(num, sizeof(double)); //Asignamos memoria.
	for(int i= 0; i < num; i++){
		array[i]= randfrom(min, max); //Guardamos en el arreglo el número aleatorio que genera randfrom.
	}

	return array;
}