#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "Veiculo.h"

class Caminhao : public Veiculo
{

public:
    Caminhao();
    Caminhao(string tipo_carro, string placa, int peso_max, int volume_max, string localizacao);
    ~Caminhao();

    friend ostream &operator<<(ostream &out, Caminhao *caminhao);
};

#endif