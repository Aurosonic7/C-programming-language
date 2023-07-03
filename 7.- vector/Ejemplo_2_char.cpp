#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void imprimeVector(vector<char>& vctr);
void quickSort(vector<char>& vctr, int low, int high);
int partition(vector<char>& vctr, int low, int high);
int busquedaBinaria(vector<char>& vctr, char letra);
int main(){
    vector<char> vctrChar;
    int opcion;
    do{
        cout<<"::Bienvenido al menu de vector (char)::"<<endl;
        cout<<"1.- Ingresar caracter"<<endl;
        cout<<"2.- Ordenar caracter"<<endl;
        cout<<"3.- Buscar un caracter"<<endl;
        cout<<"4.- Eliminar un caracter"<<endl;
        cout<<"5.- Modificar un caracter"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "<<endl; cin>>opcion;
        switch(opcion){
            case 1:
                char letra;
                cout<<"Digite un caracter "; fflush(stdin); letra=getchar(); vctrChar.push_back(letra);
                imprimeVector(vctrChar);
            break;
            case 2:
                quickSort(vctrChar,0,vctrChar.size()-1);
                imprimeVector(vctrChar);
            break;
            case 3:
                char buscar;
                imprimeVector(vctrChar);
                cout<<"Digite la letra a buscar: "; fflush(stdin); buscar=getchar();
                int indice;
                indice=busquedaBinaria(vctrChar,buscar);
                (indice!=-1) ? cout<<"La letra: "<<buscar<<" esta en la posicion: "<<indice<<endl : cout<<"El elemento "<<buscar<<" no se encontro en el vector"<<endl;
            break;
            case 4:
                char eliminar;
                imprimeVector(vctrChar);
                cout<<"Digite el caracter a eliminar: "; fflush(stdin); eliminar=getchar();
                vctrChar.erase(remove(vctrChar.begin(),vctrChar.end(),eliminar),vctrChar.end());
                imprimeVector(vctrChar);
            break;
            case 5:
                int posicion;
                char modificar;
                imprimeVector(vctrChar);
                cout<<"Digite la posicion a modifcar: "; cin>>posicion;
                cout<<"Ahora digite por cual numero se va cambiar: "; fflush(stdin); modificar=getchar();
                vctrChar[posicion]=modificar;
                cout<<"Modificacion realizada..."<<endl;
                imprimeVector(vctrChar);
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
            break;
            default:
                cout<<"Vuelve a escoger una opcion..."<<endl;
            break;
        }
    }while(opcion!=0);
    return 0;
}
void imprimeVector(vector<char>& vctr){
    cout<<"El vector contiene"<<endl;
    for(int i=0;i<vctr.size();i++){
        cout<<vctr[i]<<" ";
    }
    cout<<"\nEl vector mide "<<vctr.size()<<endl;
}
void quickSort(vector<char>& vctr, int low, int high){
    if(low<high){
        int pivoteIndex=partition(vctr,low,high);
        quickSort(vctr,low,pivoteIndex-1);
        quickSort(vctr,pivoteIndex+1,high);
    }
}
int partition(vector<char>& vctr, int low, int high){
    char pivot=vctr[high];
    int i=low;
    for(int j=low;j<high;j++){
        if(vctr[j]<=pivot){  //* De manera descendente >= o de manera ascendente <=
            swap(vctr[i],vctr[j]);
            i++;
        }
    }
    swap(vctr[i],vctr[high]);
    return i;
}
int busquedaBinaria(vector<char>& vctr, char letra){
    int low=0;
    int high=vctr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(vctr[mid]==letra) return mid;
        else if(vctr[mid]<letra) low=mid+1;
        else high=mid-1;
    }
    return -1;
}