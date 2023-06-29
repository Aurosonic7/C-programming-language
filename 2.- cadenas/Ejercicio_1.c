/*Escribir una función que reciba una cadena y la convierta en mayusculas*/
#include<stdio.h>
void mayusculas(char cadenas[]){
    int i=0;
    while(cadenas[i]!='\0'){
        if(cadenas[i]>='a' && cadenas[i]<='z') printf("%c",cadenas[i]-32);
        else printf("%c",cadenas[i]);
        i++;
    }
}
void minusculas(char cadenas[]){
    int i=0;
    while(cadenas[i]!='\0'){
        if(cadenas[i]>='A' && cadenas[i]<='Z') printf("%c",cadenas[i]+32);
        else printf("%c",cadenas[i]);
        i++;
    }
}
int main(){
    char cadenas[100];
    printf("Ingrese una cadena de texto: "); fgets(cadenas,sizeof(cadenas),stdin);
    mayusculas(cadenas);
    minusculas(cadenas);
    return 0;
}