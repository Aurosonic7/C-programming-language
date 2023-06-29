#include<stdio.h>
#include<math.h>
struct complejo{
    float p_real;
    float p_imaginaria;
    float modulo;
};
int main(){
    struct complejo numeros;
    printf("Digite la parte real: "); scanf("%f",&numeros.p_real);
    printf("Digite la parte imaginaria: "); scanf("%f",&numeros.p_imaginaria);
    numeros.modulo= sqrt(numeros.p_real*numeros.p_real+numeros.p_imaginaria*numeros.p_imaginaria);
    printf("El modulo es: %f",numeros.modulo);
    return 0;
}