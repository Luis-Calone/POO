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

    std::list<Veiculo *> getVeiculos(); // retorna a lista de veiculos
    int adicionaVeiculo(Veiculo *veiculo);
    int removeVeiculo(Veiculo *veiculo);
    Veiculo *buscaPlaca(string placa);
    void imprimeVeiculos();
    //Veiculo *maisProx();

};

#endif