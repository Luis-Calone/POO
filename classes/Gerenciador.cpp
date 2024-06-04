#include <iostream>
#include "../headers/Gerenciador.h"

Gerenciador::Gerenciador()
{
    this->clientes = nullptr;
    this->veiculos = nullptr;
    this->pedidos = nullptr;
}

Gerenciador::Gerenciador(Clientela *clientes, Garagem *veiculos, Demanda *pedidos)
{
    setClientela(clientes);
    setGaragem(veiculos);
    setDemanda(pedidos);
}

Gerenciador::~Gerenciador(){
}

int Gerenciador::setClientela(Clientela *clientes)
{
    this->clientes = clientes;

    return 1;
}

Clientela* Gerenciador::getClientela()
{
    return this->clientes;
}

int Gerenciador::setGaragem(Garagem *veiculos)
{
    this->veiculos = veiculos;

    return 1;
}

Garagem* Gerenciador::getGaragem()
{
    return this->veiculos;
}

int Gerenciador::setDemanda(Demanda *pedidos)
{
    this->pedidos = pedidos;

    return 1;
}

Demanda* Gerenciador::getDemanda()
{
    return this->pedidos;
}
