#include<iostream>
#include<cstring>
using namespace std;
void invertirCadena(char *p){
    int tam=strlen(p);
    int i;
    char aux;
    for(i=0;i<tam/2;i++){
        aux=*(p+i);
        *(p+i)=*(p+tam-1-i);
        *(p+tam-i-1)=aux;
    }
}
void invertirNumero(char *p){
    if(p[0]!='-') invertirCadena(p);
    else invertirCadena(p+1);
}
int main(){
    char cad[100];
    printf("Digite una palabra: "); cin.getline(cad,sizeof(cad),'\n');
    invertirNumero(cad);
    printf("%s",cad);
    return 0;
}