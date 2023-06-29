#include<stdio.h>
void f1(int a[], int n){ //* Asi manejamos vectores

}
void imprimeMatrizF1_V1(int *p, int m, int n){
    int i,j;
    printf("La matriz (forma 1 - v1) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(p+i*n+j)); //!Importante
        }
        printf("\n");
    }
    printf("\n");
}
void imprimeMatrizF1_V2(int v[], int m, int n){
    int i,j;
    printf("La matriz (forma 1 - v2) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",v[i*n+j]); //!Importante
        }
        printf("\n");
    }
    printf("\n");
}
void imprimeMatrizF2_V1(int A[][3], int m, int n){
    int i,j;
    printf("La matriz (forma 2 - v1) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",A[i][j]); //!Importante
        }
        printf("\n");
    }
    printf("\n");
}
void imprimeMatrizF2_V2(int m, int n, int A[][n]){
    int i,j;
    printf("La matriz (forma 2 - v2) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",A[i][j]); //!Importante
        }
        printf("\n");
    }
    printf("\n");
}
void imprimeMatrizF3(int *p[], int m, int n){
    int i,j;
    printf("La matriz (forma 3) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",p[i][j]); //!Importante Forma 3 punteros
        }
        printf("\n");
    }
    printf("\n");
}
void imprimeMatrizF4(int **q, int m, int n){
    int i,j;
    printf("La matriz (forma 4) es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",q[i][j]); //!Importante Forma 4 punteros dobles
        }
        printf("\n");
    }
    printf("\n");
}
int main(){
    int b[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    //* Datos del areglo bidimensional (Matriz) para la forma 3*/
    int m=4,n=3,i;
    int *q[m];
    for(i=0;i<m;i++){
        q[i]=&b[i][0];
    }
    //**********************************************************/
    //* Datos del areglo bidimensional (Matriz) para la forma 4*/
    //int m=4,n=3,i;
    int *p[m];
    for(i=0;i<m;i++){
        p[i]=&b[i][0];
    }
    int **r=p;
    //**********************************************************/
    imprimeMatrizF1_V1(&b[0][0],4,3);
    imprimeMatrizF1_V2(&b[0][0],4,3);
    imprimeMatrizF2_V1(b,4,3);
    imprimeMatrizF2_V2(4,3,b);
    imprimeMatrizF3(q,m,n);
    imprimeMatrizF4(r,m,n);
    return 0;
}