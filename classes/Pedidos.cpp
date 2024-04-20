#include <iostream>
#include "../headers/Pedidos.h"

using namespace std;

Pedidos::Pedidos()
{
    this->automovel = NULL;
    this->pessoa = NULL;
    this->entrega = -1;
    this->produto = -1;
}

Pedidos::Pedidos(Cliente *pessoa, Veiculo *automovel, int produto, int entrega)
{
    setCliente(pessoa);
    setVeiculo(automovel);
    setProduto(produto);
    setEntrega(entrega);
}

Pedidos::~Pedidos() {}

int Pedidos::setCliente(Cliente *pessoa)
{
    if (pessoa == NULL)
        return 0;

    this->pessoa = pessoa;
    return 1;
}

int Pedidos::setVeiculo(Veiculo *automovel)
{
    if (automovel == NULL)
        return 0;

    this->automovel = automovel;
    return 1;
}

int Pedidos::setProduto(int produto)
{
    if (produto < 0)
        return 0;

    this->produto = produto;
    return 1;
}

int Pedidos::setEntrega(int entrega)
{
    if (entrega < 0)
        return 0;

    this->entrega = entrega;
    return 1;
}

Cliente *Pedidos::getCliente()
{
    if (this->pessoa == NULL)
        return NULL;

    return this->pessoa;
}

Veiculo *Pedidos::getVeiculo()
{
    if (this->automovel == NULL)
        return NULL;

    return this->automovel;
}

string Pedidos::getProduto()
{
    if (this->produto < 0)
        return 0;

    return this->produtos[this->produto];
}

int Pedidos::getEntrega()
{
    if (this->entrega < 0)
        return 0;

    return this->entrega;
}