#include<stdio.h>

void sumaV1(int a[], int tam){
    int i;
    for(i=0;i<tam;i++) a[i]+=10;
}

void sumaV2(int *b, int tam){
    int i;
    for(i=0;i<tam;i++) *(b+i)+=10;
}

int main(){
    int a[]={1,2,3,4,5,6};
    //*Datos del areglo unidimensional (Vector)*/
    int tam=sizeof(a)/sizeof(a[0]);
    printf("Tamaño del vector es: %d\n",tam);

    sumaV2(a,tam);

    int i;
    printf("Los elementos del Vector son:\n");
    //! a+i <---> &a[i] Direccion  *(a+i) <---> a[i] Valor
    for(i=0;i<tam;i++) printf("%d ",a[i]); printf("\n");


    return 0;
}