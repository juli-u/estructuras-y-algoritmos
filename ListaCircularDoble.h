#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H

#include <iostream>
#include <memory>
#include <stdexcept> 

class ListaCircularDoble {
private:
    struct Nodo {
        int dato;
        std::shared_ptr<Nodo> sig;
        std::weak_ptr<Nodo> ant;

        Nodo(int valor) : dato(valor) {}
    };

    std::shared_ptr<Nodo> cabeza;

public:
    ListaCircularDoble();
    void insertar(int valor);
    void mostrar() const;
};

#endif