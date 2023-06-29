/*Calcular la suma y el promedio de 5 valores introducidos por teclado */
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Ingrese el primer numero: "); scanf("%d",&a);
    printf("Ingrese el segundo numero: "); scanf("%d",&b);
    printf("Ingrese el tercero numero: "); scanf("%d",&c);
    printf("Ingrese el cuarto numero: "); scanf("%d",&d);
    printf("Ingrese el quinto numero: "); scanf("%d",&e);

    int suma=a+b+c+d+e;
    
    float promedio=(float) suma/5;

    printf("\nLa suna es: %d\n",suma);
    printf("El promedio es: %.2f\n",promedio);

    return 0;
}
// ./a.out<Entrada_3.txt