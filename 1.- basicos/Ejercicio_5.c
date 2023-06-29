//*Escribir un programa que lea una letra minúscula y que la muestre en mayúsculas en pantalla */
#include<stdio.h>
int main(){
    char letra;

    printf("Digite una letra minuscula: "); scanf("%c",&letra);

    /*
        A --> 65 B --> 66
        a --> 97 (a-z) b --> 98
    */

    char mayusculas = letra - 'a' + 'A';

    printf("La letra mayuscula es: %c\n",mayusculas);

    return 0;
}