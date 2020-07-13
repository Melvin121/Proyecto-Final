#include "iostream"
#include "string"
#include "string.h"

const int longCad = 20;

using namespace std;

struct costoPorArticulo{

    char nombreArticu[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void datos(int k, costoPorArticulo lista[100]);
void preci(int k, costoPorArticulo lista[100]);
void recibo(int k, costoPorArticulo lista[100]);
void sumatotal(int k, costoPorArticulo lista[100]);

int main(void){

    int k;
    
    cout << endl;
    cout << "RECIBO DE COMPRA ONLINE" << endl << endl;

    cout << "Cuantos productos ha comprado?" << endl;
    cin >> k;
    cin.ignore(100, '\n');

    costoPorArticulo lista[k];
    datos(k, lista);
    preci(k, lista);
    recibo(k, lista);
    sumatotal(k, lista);
   
   return 0; 
}

void datos(int k, costoPorArticulo lista[100]){
    cout << "Digite el nombre del producto, la cantidad comprada y el precio: " << endl;
    for( int i = 0; i < k; i++){

        fflush(stdin);
        cout << "Nombre: ";
        cin.getline(lista[i].nombreArticu, longCad);
        cout << "Cantidad comprada: ";
        cin >> lista[i].cantidad;

        cout << "Precio: ";
        cin >> lista[i].costoPorArticulo;

        cin.ignore(100, '\n');

        
    }
}

void preci(int k, costoPorArticulo lista[100]){
    for(int i = 0; i < k; i++){

        lista[i].nombreArticu;
        lista[i].cantidad;
        lista[i].precio;

        if(lista[i].cantidad >= 1){
            lista[i].precio = lista[i].cantidad * lista[i].costoPorArticulo;
        }
    }
}

void recibo(int k, costoPorArticulo lista[100]){
    cout << endl;
    cout << "------Usted ha comprado------" << endl;
    for( int i = 0; i < k; i++){
        cout << lista[i].nombreArticu << endl;
        cout << "Lleva " << lista[i].cantidad << " unidades" << endl;
        cout << "Cada una cuesta $ " << lista[i].costoPorArticulo << endl;
        cout << "Por lo que debe pagar: $ " << lista[i].precio << endl;
    }
}

void sumatotal(int k, costoPorArticulo lista[100]){
    float sum;
    cout << "------TOTAL------" << endl;
    for( int i = 0; i < k; i++){
        sum = sum + lista[i].precio;
    }
    cout << "Usted ha gastado: $" << sum << endl;
}
