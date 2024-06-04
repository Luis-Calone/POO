#ifndef DEMANDA_H
#define DEMANDA_H

#include <iostream>
#include <list>
#include <cmath>
#include "Pedido.h"

class Demanda
{
    std::list<Pedido *> pedidos;

public:
    Demanda();
    ~Demanda();

    Pedido* getPedidos(int index);
    int adicionaPedidos(Pedido *veiculo);
    int removePedidos(Pedido *veiculo);
    int limpaLista();
};

#endif