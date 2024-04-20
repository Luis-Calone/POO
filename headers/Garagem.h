#ifndef GARAGEM_H
#define GARAGEM_H

#include <iostream>
#include <list>
#include "Veiculo.h"

class Garagem
{
    std::list<Veiculo *> veiculos;

public:
    Garagem();
    ~Garagem();

    std::list<Veiculo *> getVeiculos(); // retorna a lista de veiculos
    int adicionaVeiculo(Veiculo *veiculo);
    int removeVeiculo(Veiculo *veiculo);
    Veiculo *buscaPlaca(string placa);
    void imprimeVeiculos();
};

#endif