/*Escribir una función que reciba un número entero y lo triplique*/
#include<stdio.h>

void triplicarV2(int *x){
    *x = (*x)*3;
}

int main(){
    int a;
    printf("Digite un numero: "); scanf("%d",&a);

    triplicarV2(&a);

    printf("\nEl resultado es: %d\n",a);

    return 0;
}