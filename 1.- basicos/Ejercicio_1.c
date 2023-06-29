/* Luego de ingresar el radio por teclado, hallar la circunferencia y el área de un círculo. */
#include<stdio.h>
#define pi 3.1415 //* Forma 1 de definir una constante */
int main(){
    //const float pi=3.1415; //* Forma 2 de definir una constante */ 
    float radio;
    printf("Digite el valor del radio: "); scanf("%f",&radio);
    float circunferencia=2*pi*radio;
    float area=radio*radio*pi;
    printf("La circunferencia es: %.3f\n",circunferencia);
    printf("El area es: %.3f\n",area);
    return 0;
}