#include <iostream>
#include "../headers/Veiculo.h"

Veiculo::Veiculo()
{
    this->tipoCarro = "";
    this->tipoDeCarga = "";
    this->placa = "";
    this->capacidade = 0;
    this->quantidade = 0;
    this->localizacao = "";
}

Veiculo::Veiculo(string tipoCarro, string placa, int capacidade, int quantidade, string localizacao)
{
    setCarro(tipoCarro);
    setPlaca(placa);
    setCapacidade(capacidade);
    setQuantidade(quantidade);
    setLocalizacao(localizacao);
}

Veiculo::~Veiculo() {}

int Veiculo::setCarro(string tipoCarro)
{
    if (tipoCarro == "")
        return 0;

    this->tipoCarro = tipoCarro;

    return 1;
}

string Veiculo::getCarro()
{
    return this->tipoCarro;
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
    if (capacidade <= 0)
        return 0;

    this->capacidade = capacidade;

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

int Veiculo::setLocalizacao(string localizacao)
{
    if (localizacao == "")
        return 0;

    this->localizacao = localizacao;

    return 1;
}

string Veiculo::getLocalizacao()
{
    return this->localizacao;
}

ostream &operator<<(ostream &out, Veiculo *veiculo)
{
    out << "Veiculo: " << veiculo->getCarro() << endl
        << "Placa: " << veiculo->getPlaca() << endl
        << "Capacidade: " << veiculo->getCapacidade() << endl
        << "Quantidade: " << veiculo->getQuantidade() << endl;

    return out;
}