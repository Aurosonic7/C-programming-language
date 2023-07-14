#include <stdio.h>
#include<stdlib.h>
void imprimeArreglo(int arr[], int tam); //Prototipo para la impresion del arreglo
void quickSort(int arr[], int low, int high); //Prototipo para el metodo de ordenamiento
int particion(int arr[], int low, int high); //Prototipo para la particion del arreglo
void cambio(int *a, int *b); //Prototipo para el cambio de valores
int main(int argc, char *argv[]){
    //int arr[]={8, 7, 2, 1, 0, -9, 6};
    int arr[10];
    arr[0]=atoi(argv[1]);
    arr[1]=atoi(argv[2]);
    arr[2]=atoi(argv[3]);
    arr[3]=atoi(argv[4]);
    arr[4]=atoi(argv[5]);
    arr[5]=atoi(argv[6]);
    arr[6]=atoi(argv[7]);
    arr[7]=atoi(argv[8]);
    arr[8]=atoi(argv[9]);
    arr[9]=atoi(argv[10]);
    int tam=sizeof(arr)/sizeof(arr[0]);
    imprimeArreglo(arr,tam);
    quickSort(arr,0,tam-1);
    printf("Arreglo con quickSort: ");
    imprimeArreglo(arr,tam);
    return 0;
}
void cambio(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int particion(int arr[], int low, int high){
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<high;j++){
        if (arr[j]<=pivot){
            i++;
            cambio(&arr[i],&arr[j]);
        }
    }
    cambio(&arr[i+1],&arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi=particion(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void imprimeArreglo(int arr[],int tam){
    for (int i=0;i<tam;++i)
        printf("%d ", arr[i]);
    printf("\n");
}