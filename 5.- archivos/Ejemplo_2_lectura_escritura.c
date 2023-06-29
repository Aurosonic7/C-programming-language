#include<stdio.h>
int main(){
    char nombreArch[]="nombreArchivo.txt";

    FILE *fp1;
    fp1=fopen(nombreArch,"r"); //* Apertura de archivo
    if(fp1==NULL){ //* Si hay un problema con fopen, devuelve un NULL
        printf("Problema al abrir el archivo de entrada...\n");
        return (-1); //* exit(-1)
    }

    FILE *fp2; 
    fp2=fopen("salida.txt","w"); //* Apertura del archivo
    if(fp2==NULL){ //* Si hay un problema con fopen, devuelve un NULL
        printf("Problema al abrir el archivo de salida...\n");
        return (-1); //* exit(-1)
    }

    FILE *fp3;
    fp3=fopen("copia.txt","w"); // * Prueba de copiar un archivo a otro

    //* Proceso
    char c;
    /*
    TODO: EOF ---> End Of File (fin del archivo)
    TODO: fgetc(fp): Devuelve un caracter en la posicion de fp dentro del archivo es analogo a getchar().
    */
    while(!feof(fp1)){ //* Muestra todo el contenido del archivo "nombreArchivo.txt"
        printf("%c",c);
        fputc(c,fp3); //* Va copiando caracter por caracter a otro archivo
        c=fgetc(fp1);
    }
    /*
    TODO: fputc(caracter,fp): Escribe un caracter en la posicion de fp dentro del archivo.
    */
    fputc('H',fp2);
    fputc('o',fp2);
    fputc('l',fp2);
    fputc('a',fp2);
    /*
    TODO: feof(fp): Indica con !0 si se llego al final del archivo apuntado por fp, y 0 en caso contrario
    */

    //* Cerrar el archivo
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}