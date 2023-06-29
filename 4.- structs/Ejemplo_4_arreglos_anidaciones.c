#include<stdio.h>
struct persona{
    char nombre[20];
    char direccion[100];
    char ciudad[20];
    char departamento[20];
    int edad;
};
struct empleado{
    struct persona pers;
    double salario;
};
int main(){
    int n;
    printf("Digite el numero de empleados a ingresar: "); scanf("%d",&n);
    struct empleado emp[n];
    for(int i=0;i<n;i++){
        printf("Digite el nombre del empleado %d: ",i+1); fflush(stdin); fgets(emp[i].pers.nombre,sizeof(emp[i].pers.nombre),stdin);
        printf("Digite la direccion del empleado %d: ",i+1); fgets(emp[i].pers.direccion,sizeof(emp[i].pers.direccion),stdin);
        printf("Digite la ciudad del empleado %d: ",i+1); fgets(emp[i].pers.ciudad,sizeof(emp[i].pers.ciudad),stdin);
        printf("Digite el departamento del empleado %d: ",i+1); fgets(emp[i].pers.departamento,sizeof(emp[i].pers.departamento),stdin);
        printf("Digite la edad del empleado %d: ",i+1); scanf("%d",&emp[i].pers.edad);
        printf("Digite el salario del empledo %d: ",i+1); scanf("%lf",&emp[i].salario);
    }
    for(int i=0;i<n;i++){
        printf("El nombre es: %s\n",emp[i].pers.nombre);
        printf("La direccion es: %s\n",emp[i].pers.direccion);
        printf("La ciudad es: %s\n",emp[i].pers.ciudad);
        printf("El departamento es: %s\n",emp[i].pers.departamento);
        printf("La edad es: %d\n",emp[i].pers.edad);
        printf("El salario es: %.2lf\n",emp[i].salario);
    }
    return 0;
}