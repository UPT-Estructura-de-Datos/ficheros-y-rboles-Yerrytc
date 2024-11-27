#include <iostream>
#include <fstream>
#include <cstring>  
using namespace std;

int main() {
    FILE* ptFichero;
    char fin[] = "fin";
    char frase[60];
    
    ptFichero = fopen("registroDeUsuario.txt", "wt");
    
    if (ptFichero == NULL) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }
    
    cout << "PROGRAMA para ESCRIBIR FRASES." << endl;
    cout << "Cuando quiera salir, escriba la palabra 'fin'." << endl << endl;
    
    do {
        cout << "\nEscriba una FRASE:\n(o fin). \n";
        cin.getline(frase, 60); 
        if (strcmp(frase, fin) == 0)  
            break;
        

        fprintf(ptFichero, "%s\n", frase);
    } while (strcmp(frase, fin) != 0);
    
    fclose(ptFichero); 
    return 0;
}

