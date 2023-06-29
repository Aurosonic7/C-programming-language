#include<stdio.h>
char *buscarLetra(char *puntero, char letra){
    while(*puntero++!='\0'){
        if(*puntero==letra) return puntero;
    }
    return NULL;
}
int main(){
    char cad[100],letra;
    printf("Digite una palabra: "); fgets(cad,sizeof(cad),stdin);
    printf("Digite la letra a buscar: "); letra=getchar();
    char *dir=buscarLetra(cad,letra);
    if(dir==NULL) printf("No existe...");
    else printf("El caracter %c esta en la dirección %p, en la palabra %s",letra,dir,cad);
    return 0;
}