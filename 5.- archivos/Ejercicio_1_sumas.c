/* 
*   Dado un archivo "suma.txt" que contiene una serie de números enteros, 
*   indicar la suma de los enteros positivos y 
*   la suma de los números negativos (guardarlos en el mismo archivo). 
*/
#include<stdio.h>
int main(){
    //* abriendo el archivo
    FILE *fp;
    fp=fopen("Ejercicio_1_sumas.txt","r+"); //* Abrimos un archivo para lectura y escritura
    //* Proceso
    int x, sumaPos=0, sumaNeg=0;
    while(!feof(fp)){
        fscanf(fp,"%d",&x);
        if(x>=0) sumaPos+=x;
        else sumaNeg+=x;
    }
    fprintf(fp,"\nLa suma de los numeros positivos son: %d\n",sumaPos); //* Escribiendo en el archivo
    fprintf(fp,"\nLa suma de los numeros negativos son: %d\n",sumaNeg);
    //* Cerrando el archivo
    fclose(fp);
    return 0;
}