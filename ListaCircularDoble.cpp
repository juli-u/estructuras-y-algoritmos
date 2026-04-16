#include "ListaCircularDoble.h"

using namespace std;

ListaCircularDoble::ListaCircularDoble() : cabeza(nullptr) {}

void ListaCircularDoble::insertar(int valor) {
    auto nuevo = make_shared<Nodo>(valor);

    if (!cabeza) {
        cabeza = nuevo;
        cabeza->sig = cabeza;
        cabeza->ant = cabeza;
    } else {
        shared_ptr<Nodo> ultimo = cabeza->ant.lock();

        nuevo->sig = cabeza;
        nuevo->ant = ultimo;

        ultimo->sig = nuevo;
        cabeza->ant = nuevo;
    }
}

void ListaCircularDoble::mostrar() const {
    if (!cabeza) {
        throw runtime_error("Error: Intento de mostrar una lista vacia.");
    }

    shared_ptr<Nodo> temp = cabeza;
    do {
        cout << temp->dato << " ";
        temp = temp->sig;
    } while (temp != cabeza);
    cout << endl;
}