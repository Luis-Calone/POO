#ifndef CLIENTELA_H
#define CLIENTELA_H

#include <iostream>
#include <list>
#include <cmath>
#include "Cliente.h"

class Clientela
{
    std::list<Cliente *> clientes;

public:
    Clientela();
    ~Clientela();

    Cliente* getClientes(int index);
    int adicionaClientes(Cliente *veiculo);
    int removeClientes(Cliente *veiculo);
    int limpaLista();
};

#endif