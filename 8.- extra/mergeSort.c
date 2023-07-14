#include<stdio.h>
#include<stdlib.h>
void imprimeArreglo(int arr[],int tam); //Prototipo para la impresion del arreglo
void mergeSort(int arr[],int l,int r); //Prototipo para el metodo de ordenamiento
void merge(int arr[],int p,int q,int r); //Prototipo para el merge
int main(int argc, char *argv[]){
    //int arr[]={6, 5, 12, 10, 9, 1,-1};
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
    mergeSort(arr,0,tam-1);
    printf("Arreglo con mergeSort: ");
    imprimeArreglo(arr,tam);
    return 0;
}
void imprimeArreglo(int arr[],int tam){
    for (int i=0;i<tam;++i)
        printf("%d ", arr[i]);
    printf("\n");
}
void merge(int arr[], int p, int q, int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1], M[n2];
    for (int i=0;i<n1;i++)
        L[i]=arr[p+i];
    for (int j=0;j<n2;j++)
        M[j]=arr[q+1+j];
    int i,j,k;
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2){
        if (L[i]<=M[j]) {
            arr[k]=L[i];
            i++;
        }else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<n2) {
        arr[k]=M[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if (l < r){
        int m=l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}