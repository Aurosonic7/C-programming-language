#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//* Funcion que recibe los datos del alumno (en formato csv) y calcula el puntaje final
float obtenerPuntaje(char *linea){
    float puntProceso,puntExFinal;
    //* Tenemos los campos nombre, apellido, puntProceso, puntExFinal
    //* Contaremos el nro de comas hasta llegar al campo puntProceso
    int nroComas=0,i=0;
    while(nroComas<2){ //* No verificamos que lleguemos al final de la linea (suponemos el formato correcto)
        if(linea[i]==',') nroComas++;
        i++;
    }
    //* Ahora trabajamos con el primer numero
    char nro[100];
    int j=0;
    while(linea[i]!=',') nro[j++] = linea[i++]; //* Copiamos el puntaje (como cadena)
    nro[j]='\0'; //* Caracter de terminacion de la cadena
    puntProceso=atoi(nro); //* Conversion del nro a cadena
    i++; //* Para saltar la coma en "linea".

    //* Ahora obtendremos el otro numero
    j=0;
    while(linea[i]!='\0') nro[j++] = linea[i++]; //* Copiamos el puntaje (como cadena)
    nro[j] = '\0'; //* Caracter de terminacion de la cadena
    puntExFinal=atoi(nro); //* Conversion del nro a cadena

    //* Se calcula el puntaje final
    float puntaje=0.4*puntProceso+0.6*puntExFinal;
    return puntaje;
}
int contarAlumnos(char *nombreArch){
    FILE *pa=fopen(nombreArch,"r");
    if(pa == NULL){
        printf("Problema al abrir el archivo %s. Termina el programa\n",nombreArch);
    }
    int n=0; //* Cantidad de alumnos
    char c=fgetc(pa);
    while(!feof(pa)){
        if(c=='\n') n++;
        c=fgetc(pa);
    }
    fclose(pa);
    return n-1;
}

int main(){
    char nombreArchivoEnt[]="Ejercicio_2_calificaciones_csv.csv";
    char nombreArchivoSal[]="Ejercicio_2_calificaciones_csv_procesada.csv";
    int n = contarAlumnos(nombreArchivoEnt);
    printf("El numero de alumnos es: %d\n",n);

    //* Apertura de archivos
    FILE *pEnt=fopen(nombreArchivoEnt,"r");
    if(pEnt == NULL){
        printf("Problema al abrir el archivo %s. Termina el programa\n",nombreArchivoEnt);
        exit(-1);
    }

    FILE *pSal=fopen(nombreArchivoSal,"w");
    if(pEnt == NULL){
        printf("Problema al crear el archivo %s. Termina el programa\n",nombreArchivoSal);
        exit(-1);
    }

    //* Primero llegamos a la segunda linea
    char linea[1000];
    fgets(linea,sizeof(linea),pEnt); //* Titulos de los campos.

    //* Recordemos que el fgets almacena el salto de linea!!
    linea[strlen(linea)-1]='\0'; //* Colocamos el terminador de cadena en lugar del salto de linea

    //* Agregamos el campo "Puntaje - Final" y guardamos en la salida
    fprintf(pSal,"$s, Puntaje Final - Curso\n",linea);

    //* Luego, recorremos la lista de alumnos
    float puntaje;
    int i;
    for(i=0;i<n;i++){
        fgets(linea,1000,pEnt); //* Leemos la linea correspondiente a un alumno
        linea[strlen(linea)-1]='\0'; //* Sacamos el salto de linea
        puntaje=obtenerPuntaje(linea);
        fprintf(pSal,"%s,%.2f\n",linea,puntaje);
    }

    return 0;
}