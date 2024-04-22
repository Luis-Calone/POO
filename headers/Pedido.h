#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include "Cliente.h"
#include "Veiculo.h"
using namespace std;

class Pedido
{
    Cliente *pessoa;
    Veiculo *automovel;
    string produto;
    int entrega;

public:
    Pedido();
    Pedido(Cliente *pessoa, Veiculo *automovel, string produto, int entrega);
    ~Pedido();

    int setCliente(Cliente *pessoa);
    Cliente *getCliente();

    int setVeiculo(Veiculo *automovel);
    Veiculo *getVeiculo();

    int setProduto(string produto);
    string getProduto();

    int setEntrega(int entrega);
    int getEntrega();
};

#endif