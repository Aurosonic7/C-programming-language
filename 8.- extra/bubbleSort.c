#include<stdio.h>
#include<stdlib.h>
void imprimeArreglo(int arr[], int tam); //Prototipo para la impresion del arreglo
void bubbleSort(int arr[], int tam); //Prototipo para el metodo de ordenamiento
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
    printf("Arreglo con bubbleSort: ");
    bubbleSort(arr,tam);
    imprimeArreglo(arr,tam);
    return 0;
}
void imprimeArreglo(int arr[], int tam){
    for(int i=0;i<tam;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int tam){
    for(int i=0;i<tam-1;++i)
        for(int j=0;j<tam-i-1;++j)
            if(arr[j]>arr[j+1]){
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
}