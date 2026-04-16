#include "ListaCircularDoble.h"

int main() {
    ListaCircularDoble lista;

    try {
        lista.insertar(10);
        lista.insertar(20);
        
        cout << "Contenido de la lista: ";
        lista.mostrar();
        
    } catch (const std::exception& e) {
        std::cerr << "Ocurrio un error: " << e.what() << std::endl;
    }

    return 0;
}