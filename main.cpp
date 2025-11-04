/// MAIN PRINCIPAL
#include <iostream>
using namespace std;
#include "funciones.h"
#include "rlutil.h"


int main()
{
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::RED);
    rlutil::hidecursor();
    int key = rlutil::getkey();
    cout<<key;
//
//
//    rlutil::setBackgroundColor(rlutil::BLACK);
//    rlutil::setColor(rlutil::MAGENTA);
//    system("pause");

    rlutil::locate(5,5);
    cout<<"HOLA MUNDOOOOOO";

    const int TAM=10;
    int vec[TAM]={1,2,3,4,5,6,7,8,9,10};

    int numero=6;
    float promedio;


//    saludar();
//    cargarVector(vec,TAM);
//    mostrarVector(vec,TAM);

//    cout<<"NUMERO ANTES DE LA FUNCION: "<<numero<<endl;
//
//    cambiarNumero(numero);
//    cout<<"NUMERO DESPUES DE LA FUNCION: "<<numero<<endl;

    calcularPromedio(vec,TAM,promedio);
    //cout<<"EL PROMEDIO ES: "<<promedio;


    return 0;
}
