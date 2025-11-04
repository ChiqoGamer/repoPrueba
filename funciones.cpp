/// ARCHIVO .CPP DE FUNCIONES
///DEFINICIONES
#include <iostream>
#include "funciones.h"
using namespace std;
void saludar(){
    cout << "Hello world!" << endl;
}

void cargarVector(int vecNombre[], const int TAM){
    for (int i=0; i<TAM; i++){
        cout<<"Cargando vector en posicion: "<<i+1<<endl;
        cin>>vecNombre[i];
    }
}

void mostrarVector(int vec[],const int tamanio){
    for (int i=0; i<tamanio; i++){
        cout<<"valor de la posicion: "<<i<<" ";
        cout<<vec[i];
    }
}

void cambiarNumero(int &numero){
    numero=10;
}

void calcularPromedio(int vec[],const int TAM,float &promedio){
    int acumulador=0;
    for (int i=0;i<TAM;i++ ){
        acumulador += vec[i];

    }
    promedio = (float)acumulador/TAM;

}
