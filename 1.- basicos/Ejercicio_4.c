//*Leer un número de 5 cifras e imprimir el dígito de las centenas*/
#include<stdio.h>

//* 1234 / 10 ----> 123
//* abcde / 100 ----> abc

//* % ----> resto de una division
//* 125 % 10 ----> 5
//* 125 % 100 ----> 25

//* abc % 10 ----> c

int main(){
    int n;
    printf("Digite un numero de 5 cifras: "); scanf("%d",&n);

    int n1 = n/100; // abc
    int n2 = n1%10; // c
    printf("El digito de las centenas es: %d",n2);


    return 0;
}