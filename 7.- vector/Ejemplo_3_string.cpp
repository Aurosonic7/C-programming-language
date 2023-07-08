#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
void imprimeVector(vector<string>& vctr);
void cambio(vector<string>& vctr, int i, int j);
int partition(vector<string>&vctr, int low, int high);
void quickSort(vector<string>& vctr, int low, int high);
int busquedaBinaria(const vector<string>& vctr, string palabra);
int main(){
    vector<string> vctrString;
    int opcion;
    string palabra,buscar,eliminar,modificar;
    do{
        cout<<"::Bienvenido al menu de vector (string)::"<<endl;
        cout<<"1.- Ingresar cadena"<<endl;
        cout<<"2.- Ordenar cadenas"<<endl;
        cout<<"3.- Buscar una cadena"<<endl;
        cout<<"4.- Eliminar cadena"<<endl;
        cout<<"5.- Modificar cadena"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Digite una palabra "; fflush(stdin); getline(cin,palabra); vctrString.push_back(palabra);
                imprimeVector(vctrString);
            break;
            case 2:
                quickSort(vctrString,0,vctrString.size()-1);
                imprimeVector(vctrString);
            break;
            case 3:
                imprimeVector(vctrString);
                cout<<"Digite la palabra a buscar: "; fflush(stdin); getline(cin,buscar);
                int indice;
                indice=busquedaBinaria(vctrString,buscar);
                (indice!=-1) ? cout<<"La palabra: "<<buscar<<" esta en la posicion: "<<indice<<endl : cout<<"La palabra "<<buscar<<" no se encontro en el vector"<<endl;
            break;
            case 4:
                imprimeVector(vctrString);
                cout<<"Digite la palabra a eliminar: "; fflush(stdin); getline(cin,eliminar);
                vctrString.erase(remove(vctrString.begin(),vctrString.end(),eliminar),vctrString.end());
                imprimeVector(vctrString);
            break;
            case 5:
                int posicion;
                imprimeVector(vctrString);
                cout<<"Digite la posicion a modifcar: "; cin>>posicion;
                cout<<"Ahora digite por cual palabra se va modificar: "; fflush(stdin); getline(cin,modificar);
                vctrString[posicion]=modificar;
                cout<<"Modificacion realizada..."<<endl;
                imprimeVector(vctrString);
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
            break;
            default:
                cout<<"Vuelve a escoger una opcion"<<endl;
            break;
        }
    }while(opcion!=0);
    return 0;
}
void imprimeVector(vector<string>& vctr){
    cout<<"El vector contiene"<<endl;
    for(int i=0;i<vctr.size();i++){
        cout<<vctr[i]<<" ";
    }
    cout<<"\nEl vector mide "<<vctr.size()<<endl;
}
void cambio(vector<string>& vctr, int i, int j){
    string aux=vctr[i];
    vctr[i] = vctr[j];
    vctr[j] = aux;
}
int partition(vector<string>&vctr, int low, int high){
    string pivoteIndex=vctr[high];
    int i = low-1;
    for(int j=low;j<high;j++)
        if(vctr[j]<pivoteIndex){
            i++;
            cambio(vctr,i,j);
        }
    cambio(vctr,i+1,high);
    return (i+1);
}
void quickSort(vector<string>& vctr, int low, int high){
    if (low<high) {
        int pivoteIndex = partition(vctr,low,high);
        quickSort(vctr, low, pivoteIndex-1);
        quickSort(vctr, pivoteIndex+1,high);
    }
}
int busquedaBinaria(const vector<string>& vctr, string palabra){
    int low=0;
    int high=vctr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(vctr[mid]==palabra) return mid;
        else if(vctr[mid]<palabra) low=mid+1;
        else high=mid-1;
    }
    return -1;
}