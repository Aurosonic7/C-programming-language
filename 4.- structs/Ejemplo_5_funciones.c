#include<stdio.h>
struct atleta{
    int id;
    char nombre[30];
    float altura;
};
void imprimirAtleta(struct atleta *a){
    printf("\nLos datos del atleta son:\n");
    printf("El id es: %d\n",a->id);
    printf("El nombre es: %s",a->nombre);
    printf("La altura es: %.2f\n",a->altura);
}
struct atleta cargarAtleta_normal(){
    struct atleta at;
    printf("Digite el id del atleta: "); scanf("%d",&at.id);
    printf("Digite el nombre del atleta: "); fflush(stdin); fgets(at.nombre,sizeof(at.nombre),stdin);
    printf("Digite la altura del atleta: "); scanf("%f",&at.altura);
    return at;
}
void cargarAtleta_punt(struct atleta *a){
    printf("Digite el id del atleta: "); scanf("%d",&a->id);
    printf("Digite el nombre del atleta: "); fflush(stdin); fgets(a->nombre,sizeof(a->nombre),stdin);
    printf("Digite la altura del atleta: "); scanf("%f",&a->altura);
}
int main(){
    struct atleta at1;
    at1=cargarAtleta_normal();
    imprimirAtleta(&at1);
    printf("\n");
    cargarAtleta_punt(&at1);
    imprimirAtleta(&at1);
    return 0;
}