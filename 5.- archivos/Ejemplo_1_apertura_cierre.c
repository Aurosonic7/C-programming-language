#include<stdio.h>
int main(){
    char nombreArch[]="Prueba.txt";
    FILE *fp;
    fp=fopen(nombreArch,"r"); //* Apertura de archivo
    
    //* Si hay un problema con fopen, devuelve un NULL
    if(fp==NULL){
        printf("Problema al abrir el archivo!!!\n");
        return (-1);
    }

    //* Cerrar el archivo
    fclose(fp);
    return 0;
}