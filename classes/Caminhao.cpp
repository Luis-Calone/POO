#include <iostream>
#include "../headers/Caminhao.h"

Caminhao::Caminhao()
{
    this->altura = 0.0;
    this->largura = 0.0;
}

Caminhao::Caminhao(string tipoCarro, float altura, float largura, string tipoDeCarga, string placa, int capacidade, int quantidade)
{
    setCarro(tipoCarro);
    setCarga(tipoDeCarga);
    setPlaca(placa);
    setCapacidade(capacidade);
    setQuantidade(quantidade);
    setAltura(altura);
    setLargura(largura);
}

Caminhao::~Caminhao() {}

int Caminhao::setAltura(float altura)
{
    if (altura <= 0.0)
        return 0;

    this->altura = altura;

    return 1;
}

float Caminhao::getAltura()
{
    if (this->altura <= 0.0)
        return 0;

    return this->altura;
}

int Caminhao::setLargura(float largura)
{
    if (largura <= 0)
        return 0;

    this->largura = largura;

    return 1;
}

float Caminhao::getLargura()
{
    if (this->largura <= 0.0)
        return 0;

    return this->largura;
}

ostream &operator<<(ostream &out, Caminhao *veiculo)
{
    out << "Veiculo: " << veiculo->getCarro() << endl
        << "Placa: " << veiculo->getPlaca() << endl
        << "Largura: " << veiculo->getLargura() << endl
        << "Altura: " << veiculo->getAltura() << endl
        << "Capacidade: " << veiculo->getCapacidade() << endl
        << "Carga: " << veiculo->getCarga() << endl
        << "Quantidade: " << veiculo->getQuantidade() << endl;

    return out;
}
