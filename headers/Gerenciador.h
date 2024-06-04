#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <iostream>
#include "Garagem.h"
#include "Demanda.h"
#include "Clientela.h"

class Gerenciador
{
    Clientela *clientes;
    Garagem *veiculos;
    Demanda *pedidos;

public:
    Gerenciador();
    Gerenciador(Clientela *clientes, Garagem *veiculos, Demanda *pedidos);
    ~Gerenciador();

    int setClientela(Clientela *clientes);
    int setGaragem(Garagem *veiculos);
    int setDemanda(Demanda *pedidos);

    Clientela* getClientela();
    Garagem* getGaragem();
    Demanda* getDemanda();
    
};

#endif