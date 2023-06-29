#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    //*Datos del aareglo unidimensional (Vector)*/
    int i, tam=sizeof(a)/sizeof(a[0]);
    printf("Tamaño del vector es: %d\n",tam);
    printf("Recorremos los elementos del vector\n");
    for(i=0;i<tam;i++) printf("A[%d] esta en %p y tiene el vector: %d\n",i,&a[i],a[i]); //! a+i <---> &a[i] Direccion  *(a+i) <---> a[i] Valor

    printf("\n¿Que pasa si imprimo el valor de a? %p\n",a);
    int *p=a;
    printf("¿Que contiene p? %p\n\n",p);

    for(i=0;i<tam;i++) printf("*(p+%d) esta en %p y tiene el valor: %d\n",i,p+i,*(p+i));

    return 0;
}