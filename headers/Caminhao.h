#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "Veiculo.h"

class Caminhao : public Veiculo
{
    float altura;
    float largura;

public:
    Caminhao();
    Caminhao(string tipoCarro, float alutra, float largura, string tipoDeCarga, string placa, int capacidade, int quantidade);
    ~Caminhao();

    int setAltura(float altura);
    float getAltura();

    int setLargura(float largura);
    float getLargura();
};

#endif