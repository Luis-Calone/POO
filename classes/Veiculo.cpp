#include <iostream>
#include "Veiculo.h"

Veiculo::Veiculo()
{
    this->carro = 0;
    this->tipoDeCarga = "";
    this->placa = "";
    this->capacidade = 0;
    this->quantidade = 0;
}

Veiculo::Veiculo(int carro, string tipoDeCarga, string placa, int capacidade, int quantidade)
{
    setCarro(carro);
    setCarga(tipoDeCarga);
    setPlaca(placa);
    setCapacidade(capacidade);
    setQuantidade(quantidade);
}

Veiculo::~Veiculo() {}

int Veiculo::setCarro(int carro)
{
    if (carro < 0 || carro >= 3)
        return 0;

    this->carro = carro;

    return 1;
}

string Veiculo::getCarro()
{
    return this->tipoDeCarro[this->carro];
}

int Veiculo::setCarga(string carga)
{
    if (carga == "\0")
        return 0;

    this->tipoDeCarga = carga;

    return 1;
}

string Veiculo::getCarga()
{
    return this->tipoDeCarga;
}

int Veiculo::setPlaca(string placa)
{
    if (placa == "\0")
        return 0;

    this->placa = placa;

    return 1;
}

string Veiculo::getPlaca()
{
    return this->placa;
}

int Veiculo::setCapacidade(int capacidade)
{
    if (carro < 0)
        return 0;

    this->carro = carro;

    return 1;
}

int Veiculo::getCapacidade()
{
    return this->capacidade;
}

int Veiculo::setQuantidade(int quantidade)
{
    if (quantidade < 0)
        return 0;

    this->quantidade = quantidade;

    return 1;
}

int Veiculo::getQuantidade()
{
    return this->quantidade;
}