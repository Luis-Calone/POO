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
    Gerenciador(Cliente *pessoa, string nome, string cpf, string endereco, int idade,Pedido *demanda, string produto);
    ~Gerenciador();

    int setVeiculos(Garagem *veiculos);
    //Veiculo *entregadorProximo();
    Pedido *getPedido();
};

#endif