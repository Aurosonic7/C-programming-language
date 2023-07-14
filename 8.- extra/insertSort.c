#include<stdio.h>
#include<stdlib.h>
void imprimeArreglo(int arr[], int tam); //Prototipo para la impresion del arreglo
void insertionSort(int arr[], int tam); //Prototipo para el metodo de ordenamiento
int main(int argc, char *argv[]){
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
    printf("Arreglo con insertSort: ");
    insertionSort(arr,tam);
    imprimeArreglo(arr,tam);
    return 0;
}
void imprimeArreglo(int arr[], int tam){
    for(int i=0;i<tam;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void insertionSort(int arr[], int tam){
    for(int i=1;i<tam;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            --j;
        }
    arr[j+1]=key;
    }
}
