#include<stdio.h>
/*      Definicion de estructuras.
    *   struct <nombre_estructura>{
    *       <tipo_de_dato_campo1> <nombre_campo1>;
    *       <tipo_de_dato_campo2> <nombre_campo2>;
    *       ...
    *       <tipo_de_dato_campo3> <nombre_campo3>;
    *   }
    
        Declaración de variables de estructuras.
    *   struct paciente{
    *       char nombre[30];
    *       int edad, peso;
    *       char direcciones[100];
    *   } pac1, pac2, pac3;

    *   struct paciente pac1, pac2, pac3;

*/
struct atleta{
    int cedula;
    char apellido[100];
    int edad;
    float altura;
};

int main(){
    struct atleta myvar;
    myvar.b=99;
    printf("%d\n",myvar.b);
    return 0;
}