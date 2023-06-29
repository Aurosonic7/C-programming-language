#include<stdio.h>
int main(){
    FILE *fp1;
    fp1=fopen("entrada.txt","r"); //* Apertura de archivo
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

    //* Proceso
    char cad[1000];
    
    /*
    TODO:                   char *fgets (char *cad, int tamMax, FILE *fp) 
    TODO:   Esta función una cadena de caracteres del archivo apuntado por fp, y lo guarda en una cadena
    TODO:   (o a la cadena apuntada por un puntero a caracter) cad.
    TODO:   Termina cuando lee tamMax-1 caracteres (por el '\0'), o cuando encuentra un salto de línea, o cuando
    TODO:   se llegue al final del archivo (lo que sea que se dé primero)
    TODO:
    TODO:   Lee toda la cadana hasta que encuentra un ENTER.
    TODO:
    TODO:   La función devuelve el valor de cad (la dirección). Si se llegó al EOF y no leyó un caracter,
    TODO:   devuelve un NULL
    */

    /*
    while(!feof(fp1)){
        fgets(cad,sizeof(cad),fp1);
        printf("%s",cad);
    }
    */

    /*
    TODO:                   int fputs (char *str, FILE *fp)
    TODO:   Esta función escribe una cadena (o la dirección contenida en un puntero a caracter) str al archivo
    TODO:   apuntado por fp.
    TODO:
    TODO:   Devuelve un valor no-negativo. Si se produjo un error, retorna EOF. 
    */
    //fputs("Hola mundo",fp2);

    /*
    TODO:                   int fscanf (FILE *fp, const char *formato, ...)
    TODO:   Se comporta prácticamente de manera similar al scanf, solamente se debe agregar el puntero a archivo. 
    TODO:   Lee la cadenas hata que encuentre un espacio, tabulador o un salto de linea.
    */
    
    fscanf(fp1,"%s",cad);
    printf("%s\n",cad);
    fscanf(fp1,"%s",cad);
    printf("%s\n",cad);

    /*
    TODO:                   int fprintf(FILE *fp, const char *formato, ...)
    TODO:   Se comporta prácticamente de manera similar al printf, solamente se debe agregar el puntero a archivo.
    TODO:   
    */

    //* Cerrar el archivo
    fclose(fp1);
    fclose(fp2);
    return 0;
}