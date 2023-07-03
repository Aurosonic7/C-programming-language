#include<iostream>
#include<vector>
using namespace std;
void imprimeVector(vector<int>& vctr);
void quickSort(vector<int>& vctr, int low, int high);
int partition(vector<int>& vctr, int low, int high);
void cambio(vector<int>& vctr, int i, int j);
int busquedaBinaria(vector<int>& vctr, int low, int high, int buscar);
//* Puede que ocupe la eliminación por aqui
int main(){
    vector<int> vctrInt;
    int opcion;
    do{
        cout<<"::Bienvenido al menu de vector (int)::"<<endl;
        cout<<"1.- Ingresar un numero"<<endl;
        cout<<"2.- Ordenar numeros"<<endl;
        cout<<"3.- Buscar un numero"<<endl;
        cout<<"4.- Eliminar un numero"<<endl;
        cout<<"5.- Modificar un numero"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        switch(opcion){
            case 1:
                int numero;
                cout<<"Digite un numero: "; cin>>numero; vctrInt.push_back(numero);
                imprimeVector(vctrInt);
            break;
            case 2:
                int tipo;
                cout<<"Ordenando vector..."<<endl;
                quickSort(vctrInt,0,vctrInt.size()-1);
                imprimeVector(vctrInt);
            break;
            case 3:
                int buscar;
                imprimeVector(vctrInt);
                cout<<"Digite el numero a buscar: "; cin>>buscar;
                int indice;
                indice=busquedaBinaria(vctrInt,0,vctrInt.size()-1,buscar);
                (indice!=-1) ? cout<<"El numero: "<<buscar<<" esta en la posicion: "<<indice<<endl : cout<<"El elemento "<<buscar<<" no se encontro en el vector"<<endl;
            break;
            case 4:
                int eliminar;
                imprimeVector(vctrInt);
                cout<<"Digite el numero a eliminar: "; cin>>eliminar;
                vctrInt.erase(remove(vctrInt.begin(),vctrInt.end(),eliminar),vctrInt.end());
                imprimeVector(vctrInt);
            break;
            case 5:
                int posicion,modificar;
                imprimeVector(vctrInt);
                cout<<"Digite la posicion a modifcar: "; cin>>posicion;
                cout<<"Ahora digite por cual numero se va cambiar: "; cin>>modificar;
                vctrInt[posicion]=modificar;
                cout<<"Modificacion realizada..."<<endl;
                imprimeVector(vctrInt);
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
void quickSort(vector<int>& vctr, int low, int high){
    if(low<high){
        int p=partition(vctr,low,high);
        quickSort(vctr,low,p-1);
        quickSort(vctr,p+1,high);
    }
}
int partition(vector<int>& vctr, int low, int high) {
    int pivot=vctr[high];
    int i=low-1;
    for(int j=low;j<high;++j){
        if(vctr[j]<=pivot){ //* De manera descendente >= o de manera ascendente <=
            ++i;
            cambio(vctr,i,j);
        }
    }
    cambio(vctr,i+1,high);
    return i+1;
}
void cambio(vector<int>& vctr, int i, int j) {
    int temp = vctr[i];
    vctr[i] = vctr[j];
    vctr[j] = temp;
}
int busquedaBinaria(vector<int>& vctr, int low, int high, int buscar){
    while(low<=high){
        int mid=low+(high - low)/2;
        if (vctr[mid]==buscar) return mid;
        else if (vctr[mid]>buscar) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
void imprimeVector(vector<int>& vctr){
    cout<<"El vector contiene"<<endl;
    for(int i=0;i<vctr.size();i++){
        cout<<vctr[i]<<" ";
    }
    cout<<"\nEl vector mide "<<vctr.size()<<endl;
}