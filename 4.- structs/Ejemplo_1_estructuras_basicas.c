#include<stdio.h>
struct atleta{
    int cedula;
    char apellido[100];
    int edad;
    float altura;
};
int main(){
    struct atleta at1={3644715,"Christian",34,1.71};
    //* El operador . ---> accedemos a un campo de la estructura
    printf("Los datos del atleta son:\n");
    printf("Cedula: %d\n",at1.cedula);
    printf("Apellido: %s\n",at1.apellido);
    printf("Edad: %d\n",at1.edad);
    printf("Altura: %f\n",at1.altura);
    return 0;
}