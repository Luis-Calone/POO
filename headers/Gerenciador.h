#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <iostream>
#include "Garagem.h"
#include "Pedido.h"
#include "Cliente.h"

class Gerenciador
{
    Cliente *pessoa;
    Garagem *veiculos;
    Pedido *demanda;

public:
    Gerenciador();
    Gerenciador(string nome, string cpf, int idade, string produto);
    ~Gerenciador();

    Veiculo *entregadorProximo();
};

#endif