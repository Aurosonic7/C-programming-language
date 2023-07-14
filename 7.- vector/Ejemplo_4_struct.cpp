#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
struct Persona{
    int id;
    char nombre[100],sexo;
    float estatura;
};
void mostrarPersonas(vector<Persona> personas);
struct Persona agregarPersona(struct Persona persona);

void menuOrdenar(vector<Persona> personas);
bool OrdenarIdPersonasAsc(struct Persona p1, struct Persona p2);
bool OrdenarIdPersonasDesc(struct Persona p1, struct Persona p2);
bool OrdenarNombrePersonasAsc(struct Persona p1, struct Persona p2);
bool OrdenarNombrePersonasDesc(struct Persona p1, struct Persona p2);
bool OrdenarSexoPersonasAsc(struct Persona p1, struct Persona p2);
bool OrdenarSexoPersonasDesc(struct Persona p1, struct Persona p2);
bool OrdenarEstaturaPersonasAsc(struct Persona p1, struct Persona p2);
bool OrdenarEstaturaPersonasDesc(struct Persona p1, struct Persona p2);
bool OrdenarPersonasGeneral(struct Persona p1, struct Persona p2);

void menuBuscar(vector<Persona> personas);
void buscarIdPersonas(vector<Persona> personas, int id);
void buscarNombrePersonas(vector<Persona> personas, char nombre[]);
void buscarSexoPersonas(vector<Persona> personas, char sexo);
void buscarEstaturaPersonas(vector<Persona> personas, float estatura);

void menuModificar(vector<Persona> personas);

int main(){
    struct Persona persona;
    vector<Persona> personas;
    int opcion;
    size_t posicion;
    do{
        cout<<"::Bienvenido al menu de personas::"<<endl;
        cout<<"1.- Agregar persona"<<endl;
        cout<<"2.- Ordenar personas"<<endl;
        cout<<"3.- Buscar personas"<<endl;
        cout<<"4.- Eliminar personas"<<endl;
        cout<<"5.- Modificar personas"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        switch(opcion){
            case 1:
                persona=agregarPersona(persona);
                personas.push_back(persona);
                mostrarPersonas(personas);
            break;
            case 2:
                menuOrdenar(personas);
            break;
            case 3:
                menuBuscar(personas);
            break;
            case 4:
                mostrarPersonas(personas);
                cout<<"Digite la posicion a eliminar: "; cin>>posicion;
                if (posicion<personas.size()){
                    personas.erase(personas.begin()+posicion);
                    cout<<"Posición eliminada..."<<endl;
                }else cout<<"Posición inválida..."<<endl;
                mostrarPersonas(personas);
            break;
            case 5:
                menuModificar(personas);
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
void mostrarPersonas(vector<Persona> personas){
    int j;
    cout<<"ID"<<"\t"<<"Nombre"<<"\t\t"<<"Sexo"<<"\t"<<"Estatura"<<endl;
    for(int i=0;i<personas.size();i++){
        j=0;
        while(personas[i].nombre[j]!='\0') j++;
        if(j<=7) cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
        else cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
    }
}
struct Persona agregarPersona(struct Persona persona){
    cout<<"Digite su id: "; cin>>persona.id;
    cout<<"Digite su nombre: "; fflush(stdin); cin.getline(persona.nombre,sizeof(persona.nombre),'\n');
    cout<<"Digite su sexo (m/f): "; fflush(stdin); persona.sexo = getchar();
    cout<<"Digite su estatura: "; cin>>persona.estatura;
    return persona;
}
//! Menu ordenar !//
void menuOrdenar(vector<Persona> personas){
    int opcion,ordenar;
    do{
        cout<<"::De que manera vas a ordenar las personas::"<<endl;
        cout<<"1.- ID"<<endl;
        cout<<"2.- Nombre"<<endl;
        cout<<"3.- Sexo"<<endl;
        cout<<"4.- Estatura"<<endl;
        cout<<"5.- General"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"1.- Ascendente"<<endl;
                cout<<"2.- Descendente"<<endl;
                cout<<"Digite el numero para ordenar: "; cin>>ordenar;
                switch(ordenar){
                    case 1:
                        sort(personas.begin(),personas.end(),OrdenarIdPersonasAsc);
                    break;
                    case 2:
                        sort(personas.begin(),personas.end(),OrdenarIdPersonasDesc);
                    break;
                    default:
                        cout<<"Saliendo.."<<endl;
                    break;
                }
                mostrarPersonas(personas);
            break;
            case 2:
                cout<<"1.- Ascendente"<<endl;
                cout<<"2.- Descendente"<<endl;
                cout<<"Digite el numero para ordenar: "; cin>>ordenar;
                switch(ordenar){
                    case 1:
                        sort(personas.begin(),personas.end(),OrdenarNombrePersonasAsc);
                    break;
                    case 2:
                        sort(personas.begin(),personas.end(),OrdenarNombrePersonasDesc);
                    break;
                    default:
                        cout<<"Saliendo.."<<endl;
                    break;
                }
                mostrarPersonas(personas);
            break;
            case 3:
                cout<<"1.- Ascendente"<<endl;
                cout<<"2.- Descendente"<<endl;
                cout<<"Digite el numero para ordenar: "; cin>>ordenar;
                switch(ordenar){
                    case 1:
                        sort(personas.begin(),personas.end(),OrdenarSexoPersonasAsc);
                    break;
                    case 2:
                        sort(personas.begin(),personas.end(),OrdenarSexoPersonasDesc);
                    break;
                    default:
                        cout<<"Saliendo.."<<endl;
                    break;
                }
                mostrarPersonas(personas);
            break;
            case 4:
                cout<<"1.- Ascendente"<<endl;
                cout<<"2.- Descendente"<<endl;
                cout<<"Digite el numero para ordenar: "; cin>>ordenar;
                switch(ordenar){
                    case 1:
                        sort(personas.begin(),personas.end(),OrdenarEstaturaPersonasAsc);
                    break;
                    case 2:
                        sort(personas.begin(),personas.end(),OrdenarEstaturaPersonasDesc);
                    break;
                    default:
                        cout<<"Saliendo.."<<endl;
                    break;
                }
                mostrarPersonas(personas);
            break;
            case 5:
                sort(personas.begin(),personas.end(),OrdenarPersonasGeneral);
                mostrarPersonas(personas);
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
            break;
            default:
                cout<<"Vuelve a escoger una opcion"<<endl;
            break;
        }
    }while(opcion!=0);
}
//! Funciones del menu de ordenar !//
//TODO: En lo personal lo ocuparia como ORDER BY mas personalizado SQL
bool OrdenarIdPersonasAsc(struct Persona p1, struct Persona p2){return p1.id < p2.id;}
bool OrdenarIdPersonasDesc(struct Persona p1, struct Persona p2){return p1.id > p2.id;}
bool OrdenarNombrePersonasAsc(struct Persona p1, struct Persona p2){ int comparacion=strcmp(p1.nombre,p2.nombre); return comparacion < 0;}
bool OrdenarNombrePersonasDesc(struct Persona p1, struct Persona p2){ int comparacion=strcmp(p1.nombre,p2.nombre); return comparacion > 0;}
bool OrdenarSexoPersonasAsc(struct Persona p1, struct Persona p2){return p1.sexo < p2.sexo;}
bool OrdenarSexoPersonasDesc(struct Persona p1, struct Persona p2){return p1.sexo > p2.sexo;}
bool OrdenarEstaturaPersonasAsc(struct Persona p1, struct Persona p2){return p1.estatura < p2.estatura;}
bool OrdenarEstaturaPersonasDesc(struct Persona p1, struct Persona p2){return p1.estatura > p2.estatura;}
//* Función de comparación personalizada para ordenar los structs por id, luego por nombre, luego por estatura y luego por sexo
bool OrdenarPersonasGeneral(struct Persona p1, struct Persona p2){
    int comparacion=strcmp(p1.nombre,p2.nombre);
    if (p1.id != p2.id) return p1.id < p2.id;
    else if(comparacion != 0) return comparacion < 0;
    else if (p1.estatura != p2.estatura) return p1.estatura > p2.estatura; //* Se puede modificar aqui de forma ascendente o descendente
    else return p1.sexo < p2.sexo;
}
//! Menu de buscar !//
void menuBuscar(vector<Persona> personas){
    int opcion,id;
    char nombre[100],sexo;
    float estatura;
    do{
        cout<<"::De que manera vas a buscar las personas::"<<endl;
        cout<<"1.- ID"<<endl;
        cout<<"2.- Nombre"<<endl;
        cout<<"3.- Sexo"<<endl;
        cout<<"4.- Estatura"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Digite el id a buscar: "; cin>>id;
                buscarIdPersonas(personas,id);
            break;
            case 2:
                cout<<"Digite el nombre a buscar: "; fflush(stdin); cin.getline(nombre,sizeof(nombre),'\n');
                buscarNombrePersonas(personas,nombre);
            break;
            case 3:
                cout<<"Digite el sexo a buscar: "; fflush(stdin); sexo=getchar();
                buscarSexoPersonas(personas,sexo);
            break;
            case 4:
                cout<<"Digite la estatura a buscar: "; cin>>estatura;
                buscarEstaturaPersonas(personas,estatura);
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
            break;
            default:
                cout<<"Vuelve a escoger una opcion"<<endl;
            break;
        }
    }while(opcion!=0);
}
//! Funciones del menu de buscar !//
void buscarIdPersonas(vector<Persona> personas,int id){
    int i=0,j;
    while(i<personas.size()){
        if(personas[i].id==id){
            j=0;
            while(personas[i].nombre[j]!='\0') j++;
            if(j<=7) cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
            else cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
        }
        i++;
    }
}
void buscarNombrePersonas(vector<Persona> personas,char nombre[]){
    int i=0,j;
    while(i<personas.size()){
        if(strcmp(personas[i].nombre,nombre)==0){
            j=0;
            while(personas[i].nombre[j]!='\0') j++;
            if(j<=7) cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
            else cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
        }
        i++;
    }
}
void buscarSexoPersonas(vector<Persona> personas,char sexo){
    int i=0,j;
    while(i<personas.size()){
        if(personas[i].sexo==sexo){
            j=0;
            while(personas[i].nombre[j]!='\0') j++;
            if(j<=7) cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
            else cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
        }
        i++;
    }
}
void buscarEstaturaPersonas(vector<Persona> personas,float estatura){
    int i=0,j;
    while(i<personas.size()){
        if(personas[i].estatura==estatura){
            j=0;
            while(personas[i].nombre[j]!='\0') j++;
            if(j<=7) cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
            else cout<<personas[i].id<<"\t"<<personas[i].nombre<<"\t"<<personas[i].sexo<<"\t"<<personas[i].estatura<<endl;
        }
        i++;
    }
}
//! Menu de modificar !//
void menuModificar(vector<Persona> personas){
    int opcion,idNuevo;
    char nombreNuevo[100],sexoNuevo;
    float estaturaNuevo;
    size_t posicion;
    do{
        mostrarPersonas(personas);
        cout<<"::De que manera vas a modificar las personas::"<<endl;
        cout<<"1.- ID"<<endl;
        cout<<"2.- Nombre"<<endl;
        cout<<"3.- Sexo"<<endl;
        cout<<"4.- Estatura"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite la opcion a escoger: "; cin>>opcion;
        cout<<"Digite la posicion a modificar: "; cin>>posicion;
        switch(opcion){
            case 1:
                cout<<"Digite el id nuevo: "; cin>>idNuevo;
                personas[posicion].id=idNuevo;
            break;
            case 2:
                cout<<"Digite el nombre nuevo: "; fflush(stdin); cin.getline(nombreNuevo,sizeof(nombreNuevo),'\n');
                strcpy(personas[posicion].nombre,nombreNuevo);
            break;
            case 3:
                cout<<"Digite el sexo a modificar: "; fflush(stdin); sexoNuevo=getchar();
                personas[posicion].sexo=sexoNuevo;
            break;
            case 4:
                cout<<"Digite la estatura a modificar: "; cin>>estaturaNuevo;
                personas[posicion].estatura=estaturaNuevo;
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
            break;
            default:
                cout<<"Vuelve a escoger una opcion"<<endl;
            break;
        }
    }while(opcion!=0);
    mostrarPersonas(personas);
}