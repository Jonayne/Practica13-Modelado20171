/*Incluye las funciones de b_sort.c y arreglos_random.c*/
#include "b_sort.h"
#include "arreglos_random.h"

/*Declara las funciones que vamos a ocupar*/
// función que compara dos enteros
int cmp_int(const void *a, const void *b);
// función que compara dos doubles
int cmp_double(const void *a, const void *b);
// función que imprime una lista de enteros de tamaño num
void imprime_int(int *arreglo, size_t num);
// función que imprime una lista de doubles de tamaño num
void imprime_double(double *arreglo, size_t num);


int main()
{
    // Se inicializan 2 arreglos, uno de ints y otro de doubles
    int *arr1 = arreglo_int(20, 0, 10);
    double *arr2 = arreglo_double(20, 0, 10);

    // Se imprime ordena e imprime el primer arreglo
    imprime_int(arr1, 20);
    bsort(arr1, 20, sizeof(int), &cmp_int);
    imprime_int(arr1, 20);

    // Se imprime ordena e imprime el segundo arreglo
    imprime_double(arr2, 20);
    bsort(arr2, 20, sizeof(double), &cmp_double);
    imprime_double(arr2, 20);

    // Se libera la memoria que ocupan los arreglos ordenados
    free(arr1);
    free(arr2);

    return 0;
}

// Función que compara dos enteros.
int cmp_int(const void * a, const void * b){
    int value_a = *((int *)a);
    int value_b = *((int *)b);

    if(value_a < value_b) return -1;
    else if(value_a > value_b) return 1;
    else return 0;
}

// Función que compara dos dobles.
int cmp_double(const void * a, const void * b){
    double value_a= *((double *)a); 
    double value_b= *((double *)b);
    
    if(value_a < value_b) return -1;
    else if(value_a > value_b) return 1;
    else return 0;
}

// función que imprime una lista de enteros de tamaño num
void imprime_int(int * arreglo, size_t num){
    for(int i= 0; i < num; i++){
        printf("%d ", *(arreglo + i));
    }
    printf("\n");
}

// función que imprime una lista de doubles de tamaño num
void imprime_double(double * arreglo, size_t num){
    for(int i= 0; i < num; i++){
        printf("%.4f ", *(arreglo + i));
    }
    printf("\n");
}