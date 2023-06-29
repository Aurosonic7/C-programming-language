#include<stdio.h>
typedef struct{
    int id;
    char nombre[30];
    float altura;
} empleados;
int main(){
    empleados emp;
    printf("Digite el id: "); scanf("%d",&emp.id);
    printf("Digite el nombre: "); fflush(stdin); fgets(emp.nombre,sizeof(emp.nombre),stdin);
    printf("Digite la altura: "); scanf("%f",&emp.altura);

    printf("%d\n",emp.id);
    printf("%s",emp.nombre);
    printf("%.2f\n",emp.altura);
    return 0;
}