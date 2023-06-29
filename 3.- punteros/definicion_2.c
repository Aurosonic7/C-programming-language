#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("El valor de a es: %d\n",a);
    printf("La direccion de a es: %p\n",&a);
    int *p;
    p=&a; //* p apunta a la variable "a" */
    printf("El valor de p es: %p\n",p);
    *p=10;
    printf("El valor de a es: %d\n",a);

    printf("La direccion de b es: %p\n",&b);
    p=&b;
    *p=*p+a;
    int *q=&a;
    printf("El valor de b es: %d\n",b);
    printf("La suma de a y b es: %d\n",*p+*q);

    return 0;
}