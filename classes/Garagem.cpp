#include <iostream>
#include <list>
#include "../headers/Garagem.h"

Garagem::Garagem() {}

Garagem::~Garagem()
{
    for (auto v : this->veiculos)
        delete v;
}

std::list<Veiculo *> Garagem::getVeiculos()
{
    return veiculos;
}

int Garagem::adicionaVeiculo(Veiculo *veiculo)
{
    if (!veiculo)
        return 0;

    this->veiculos.push_front(veiculo);
    return 1;
}

int Garagem::removeVeiculo(Veiculo *veiculo)
{
    if (!veiculo)
        return 0;

    this->veiculos.remove(veiculo);
    return 1;
}

Veiculo *Garagem::buscaPlaca(string placa)
{
    if (placa == "" || placa.size() != 7)
        throw std::runtime_error("PLACA INVALIDA");

    for (auto v : this->veiculos)
    {
        if (v->getPlaca() == placa)
            return v;
    }

    throw std::runtime_error("PLACA DESCONHECIDA");
}

Veiculo *Garagem::maisProx()
{
    if (this->veiculos.empty())
        return NULL;

    double cood[2] = {90, 180};
    Veiculo *aux;

    for (auto &v : this->veiculos)
    {
        if (fabs(v->getLatitude()) < cood[0] && fabs(v->getLongitude()) < cood[1])
        {
            aux = v;
            cood[0] = {fabs(v->getLatitude())};
            cood[1] = {fabs(v->getLongitude())};
        }
    }

    return aux;
}

void Garagem::imprimeVeiculos()
{
    if (this->veiculos.empty())
        throw std::runtime_error("LISTA VAZIA!");

    for (auto &v : this->veiculos)
    {
        std::cout << "Veiculo: " << v->getCarro() << std::endl
                  << "Placa: " << v->getPlaca() << std::endl
                  << "Latitude: " << v->getLatitude() << std::endl
                  << "Longitude" << v->getLongitude() << std::endl
                  << std::endl;
    }
}