#include <iostream>
#include "../headers/Pedido.h"

using namespace std;

Pedido::Pedido()
{
    this->automovel = NULL;
    this->pessoa = NULL;
    this->entrega = -1;
    this->produto = -1;
}

Pedido::Pedido(Cliente *pessoa, Veiculo *automovel, string produto, int entrega)
{
    setCliente(pessoa);
    setVeiculo(automovel);
    setProduto(produto);
    setEntrega(entrega);
}

Pedido::~Pedido() {}

int Pedido::setCliente(Cliente *pessoa)
{
    if (pessoa == NULL)
        return 0;

    this->pessoa = pessoa;
    return 1;
}

int Pedido::setVeiculo(Veiculo *automovel)
{
    if (automovel == NULL)
        return 0;

    this->automovel = automovel;
    return 1;
}

int Pedido::setProduto(string produto)
{
    if (produto == "")
        return 0;

    this->produto = produto;
    return 1;
}

int Pedido::setEntrega(int entrega)
{
    if (entrega < 0)
        return 0;

    this->entrega = entrega;
    return 1;
}

Cliente *Pedido::getCliente()
{
    if (this->pessoa == NULL)
        return NULL;

    return this->pessoa;
}

Veiculo *Pedido::getVeiculo()
{
    if (this->automovel == NULL)
        return NULL;

    return this->automovel;
}

string Pedido::getProduto()
{
    return this->produto;
}

int Pedido::getEntrega()
{
    if (this->entrega < 0)
        return 0;

    return this->entrega;
}