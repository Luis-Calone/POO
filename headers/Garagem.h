#ifndef GARAGEM_H
#define GARAGEM_H

#include <iostream>
#include <list>
#include <cmath>
#include "Veiculo.h"

class Garagem
{
    std::list<Veiculo *> veiculos;

public:
    Garagem();
    ~Garagem();

    Veiculo* getVeiculos(int index);
    int adicionaVeiculos(Veiculo *veiculo);
    int removeVeiculos(Veiculo *veiculo);
    int limpaLista();
};

#endif