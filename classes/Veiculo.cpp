#include <iostream>
#include "../headers/Veiculo.h"

Veiculo::Veiculo()
{
    this->tipoCarro = "";
    this->placa = "";
    this->peso_max = 0.0;
    this->volume_max = 0.0;
    this->localizacao = "";
}

Veiculo::Veiculo(string tipoCarro, string placa, float peso_max, float volume_max, string localizacao)
{
    setCarro(tipoCarro);
    setPlaca(placa);
    setPeso_max(peso_max);
    setVolume_max(volume_max);
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

int Veiculo::setPeso_max(float peso_max)
{
    if (peso_max <= 0.0)
        return 0;

    this->peso_max = peso_max;

    return 1;
}

float Veiculo::getPeso_max()
{
    return this->peso_max;
}

int Veiculo::setVolume_max(float volume_max)
{
    if (volume_max <= 0.0)
        return 0;

    this->volume_max = volume_max;

    return 1;
}

float Veiculo::getVolume_max()
{
    return this->volume_max;
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
        << "Capacidade: " << veiculo->getPeso_max() << endl
        << "Quantidade: " << veiculo->getVolume_max() << endl;

    return out;
}