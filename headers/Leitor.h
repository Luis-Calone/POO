#ifndef LEITOR_H
#define LEITOR_H
#include <iostream>
#include <list>
#include <fstream>
#include "Clientela.h"
#include "Garagem.h"
#include "Demanda.h"

using namespace std;

class Leitor{

    private:
    Clientela* clientes;
    Garagem* veiculos;
    Demanda* pedidos;

    public:
    Leitor();
    Leitor(Clientela* clientes, Garagem* veiculos, Demanda* pedidos);
    ~Leitor();
    int lerArquivo(string arquivo, int size);

};

#endif