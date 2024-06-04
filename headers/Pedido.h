#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include "Cliente.h"
#include "Veiculo.h"
using namespace std;

class Pedido
{
    string produto;
    string coleta;
    string entrega;
    float peso;
    float volume;
    int prioridade;
    int tempo;

public:
    Pedido();
    Pedido(string produto, string coleta, string entrega, float peso, float volume, int prioridade, int tempo);
    ~Pedido();

    int setProduto(string produto);
    string getProduto();

    int setTempo(int tempo);
    int getTempo();

    int setColeta(string coleta);
    string getColeta();

    int setEntrega(string entrega);
    string getEntrega();

    int setPeso(float peso);
    float getPeso();

    int setVolume(float volume);
    float getVolume();

    int setPrioridade(int prioridade);
    int getPrioridade();
};

#endif