/*Dado un número n, imprimir en pantalla sus factores primos de la siguiente manera:
    150 = 2^1 * 3^1 * 5^2

Nota: es un ejemplo considerando una entrada n=150

    300 | 2
    150 | 2
    75 | 3
    25 | 5
    5 | 5
    1 |
*/
#include<stdio.h>
int main(){
    int n;
    printf("Digite un numero: "); scanf("%d",&n);
    int exponente;
    int i=2;
    printf("\n%d = ",n);
    while(n>1){
        while(n%i==0){ //mientras i sea divisor de n
            exponente++;
            n/=i;
        }
        if(exponente>0)
            (n!=1) ? printf("%d^%d * ",i,exponente) : printf("%d^%d\n",i,exponente);
        exponente=0;
        i++;
    }
    return 0;
}