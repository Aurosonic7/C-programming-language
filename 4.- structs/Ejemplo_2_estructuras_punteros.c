#include<stdio.h>
struct atleta{
    int cedula;
    char apellido[100];
    int edad;
    float altura;
};
int main(){
    struct atleta at1={3644715,"Christian",34,1.71};
    struct atleta *p;
    p=&at1;
    //* El operador "->" ---> accedemos a un campo de la estructura (a travez del puntero)
    printf("Los datos del atleta (punteros) son:\n");
    printf("Cedula: %d\n",p->cedula);
    printf("Cedula: %s\n",p->apellido);
    printf("Cedula: %d\n",p->edad);
    printf("Cedula: %f\n",p->altura);    
    return 0;
}