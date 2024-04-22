#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include "Cliente.h"
#include "Veiculo.h"
using namespace std;

class Pedidos
{
    Cliente *pessoa;
    Veiculo *automovel;
    string produto;
    int entrega;

public:
    Pedidos();
    Pedidos(Cliente *pessoa, Veiculo *automovel, int produto, int entrega);
    ~Pedidos();

    int setCliente(Cliente *pessoa);
    Cliente *getCliente();

    int setVeiculo(Veiculo *automovel);
    Veiculo *getVeiculo();

    int setProduto(int produto);
    string getProduto();

    int setEntrega(int entrega);
    int getEntrega();
};

#endif