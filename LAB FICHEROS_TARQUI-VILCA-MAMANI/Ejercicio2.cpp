#include <fstream> 
#include <iostream>
using namespace std; 

int main() {
    ofstream fichout("EJEMPLOS.TXT", ios::out);
    
    if (!fichout) 
        cout << "\n Incapaz de crear este o abrir el fichero \n";
    else {
        fichout << 1 << " " << 5.0 << " APROBADO" << endl;  
        fichout << 2 << " " << 1.1 << " SUSPENSO" << endl;  
        fichout << 3 << " " << 8.0 << " NOTABLE" << endl;  
        fichout.close();
    }
}


