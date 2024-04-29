#include <iostream>
#include "../headers/Pedido.h"

using namespace std;

Pedido::Pedido()
{
    this->automovel = NULL;
    this->pessoa = NULL;
    this->produto = "";
    this->coleta = "";
    this->entrega = "";
    this->peso = 0.0;
    this->volume = 0.0;
    this->prioridade = -1;
    this->tempo = -1;
}

Pedido::Pedido(Cliente *pessoa, Veiculo *automovel, string produto, string coleta, string entrega, float peso, float volume, int prioridade, int tempo)
{
    setCliente(pessoa);
    setVeiculo(automovel);
    setProduto(produto);
    setColeta(coleta);
    setEntrega(entrega);
    setPeso(peso);
    setVolume(volume);
    setPrioridade(prioridade);
    setTempo(tempo);
}

Pedido::~Pedido() {}

int Pedido::setCliente(Cliente *pessoa)
{
    if (pessoa == NULL)
        return 0;

    this->pessoa = pessoa;
    return 1;
}

int Pedido::setVeiculo(Veiculo *automovel)
{
    if (automovel == NULL)
        return 0;

    this->automovel = automovel;
    return 1;
}

int Pedido::setProduto(string produto)
{
    if (produto == "")
        return 0;

    this->produto = produto;
    return 1;
}

int Pedido::setTempo(int tempo)
{
    if (tempo < 0)
        return 0;

    this->tempo = tempo;
    return 1;
}

int Pedido::setPeso(float peso)
{
    if (peso <= 0.0)
        return 0;

    this->peso = peso;
    return 1;
}

int Pedido::setColeta(string coleta)
{
    if (coleta == "")
        return 0;

    this->coleta = coleta;
    return 1;
}

int Pedido::setEntrega(string entrega)
{
    if (entrega == "")
        return 0;

    this->entrega = entrega;
    return 1;
}

int Pedido::setVolume(float volume)
{
    if (volume <= 0.0)
        return 0;

    this->volume = volume;
    return 1; 
}

int Pedido::setPrioridade(int prioridade)
{
    if (!(prioridade == 0 || prioridade == 1))
        return 0;

    this->prioridade = prioridade;
    return 1;
}

Cliente *Pedido::getCliente()
{
    if (this->pessoa == NULL)
        return NULL;

    return this->pessoa;
}

Veiculo *Pedido::getVeiculo()
{
    if (this->automovel == NULL)
        return NULL;

    return this->automovel;
}

string Pedido::getProduto()
{
    return this->produto;
}

int Pedido::getTempo()
{
    if (this->tempo < 0)
        return 0;

    return this->tempo;
}

float Pedido::getPeso()
{
    if (this->peso <= 0.0)
        return 0;

    return this->peso;
}

string Pedido::getColeta()
{
    if (this->coleta == "")
        return "\0";

    return this->coleta;
}

string Pedido::getEntrega()
{
    if (this->entrega == "")
        return "\0";

    return this->entrega;
}

float Pedido::getVolume()
{
    if (this->volume == 0.0)
        return 0.0;

    return this->volume; 
}

int Pedido::getPrioridade()
{
    if(this->prioridade == -1)
        return 0;
    
    return this->prioridade;
}