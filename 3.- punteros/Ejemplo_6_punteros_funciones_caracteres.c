#include<stdio.h>
int main(){
    char *p="Hola mundo\n";
    printf("Direccion de la cadena: %p\n",p);
    printf("%s\n",p); //* "Hola mundo\n" es una constante (de tipo) cadena
    printf("%c\n",*(p+5));
    p="Que tal\n";
    printf("%s",p);

    char cad[100]="Hola que tal";
    printf("\n%s\n",cad);
    char *q = "Hola que tal con punteros";
    printf("\n%s\n",q);

    return 0;
}