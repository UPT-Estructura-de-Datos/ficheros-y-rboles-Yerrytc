#include <fstream> 
#include <iostream>
using namespace std; 

typedef char TCadena[30]; 

int main() {
    int i;
    float r;
    TCadena cad;
    ifstream fichin("EJEMPLOS.TXT"); // Declaración y apertura del fichero

    if (!fichin) {
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        fichin >> i; 
        
       
        while (!fichin.eof()) { 
            cout << i << " "; // Lectura del valor 'i'
            fichin >> r; // Lectura de 'r' (float)
            cout << r << " "; // Imprimir 'r'
            fichin >> cad; // Lectura de la cadena 'cad'
            cout << cad << "\n"; // Imprimir 'cad'
            fichin >> i; // Leer siguiente valor 'i'
        }
        fichin.close(); 
    } 
}

