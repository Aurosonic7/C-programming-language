/* Escribir un programa que permita la introducción por teclado (mediante getchar)
de dos valores enteros de una cifra y que calcule e imprima por pantalla el producto de ellos. */
#include<stdio.h>
int main(){
    char n1,n2;
    printf("Ingrese el primer numero de una cifra: "); n1 = getchar();

    //* '0' --> 48 */
    //* int n1_real = n1-48; */ //Estamos operando con el numero entero que representa este caracter*/
    int n1_real = n1-'0';

    getchar();
    printf("Ingrese el segundo numero de una cifra: "); n2 = getchar();
    //*int n2_real = n2-48; */
    int n2_real = n2-'0';

    //*printf("El producto es: %d",n1*n2);*/ //Imprime el producto de los valores del codigo ascii

    printf("El producto es: %d",n1_real*n2_real);

    return 0;
}