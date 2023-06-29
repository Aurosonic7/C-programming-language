/*Intercambiar valores de variables*/
#include<stdio.h>
void intercambiarV2(int *x, int *y){
    int aux=*x;
    *x=*y;
    *y=aux;
}
int main(){
    int a=3,b=7;
    printf("Valores iniciales a=%d, b=%d\n",a,b);
    intercambiarV2(&a,&b);
    printf("Valores modificados: a=%d, b=%d\n",a,b);

    return 0;
}