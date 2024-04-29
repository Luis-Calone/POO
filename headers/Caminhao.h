#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "Veiculo.h"

class Caminhao : public Veiculo
{

public:
    Caminhao();
    Caminhao(string tipoCarro, string placa, int capacidade, int quantidade, string localizacao);
    ~Caminhao();

    friend ostream &operator<<(ostream &out, Caminhao *caminhao);
};

#endif