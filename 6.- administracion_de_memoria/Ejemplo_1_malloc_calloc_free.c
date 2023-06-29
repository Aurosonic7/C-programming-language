#include<stdio.h>
#include<stdlib.h>
void imprimirVector(int v[], int N){
    int i;
    for(i=0;i<N;i++) printf("%d ",v[i]);
    printf("\n");
}
/*
*   Malloc ---> void *malloc(int n_bytes);
*   Calloc ---> void *calloc(int n_datos, int tamaño_dato);
*   Free ---> void free(void *);
*   Si el pedido falla (Malloc/Calloc) devuelve NULL.
*/
int main(){
    int N=10;    //* Pedimos al usuario el valor de N
    //* Asignaremos espacio para un vector de N elementos, empleado malloc */
    int *p;
    p = (int *) malloc((N)*sizeof(int));
    if(p == NULL){ //* Preguntamos si hubo un error
        printf("No se pudo reservar espacio en memmoria!!!");
        return (-1);
    }
    printf("El vector (con malloc) es: ");
    //* Mostraremos este vector en pantalla
    imprimirVector(p,N);
    //* Ahora asignaremos espacio para un vector de N elementos, empleando calloc */
    int *q;
    q = (int *) calloc(N, sizeof(int));
    printf("El vector (con calloc) es: ");
    //* Mostramos este vector en pantalla
    imprimirVector(q,N);

    //* Falta liberar el espacio explicitamente...
    free(p);
    free(q);

    return 0;
}