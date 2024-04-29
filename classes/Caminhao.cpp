#include <iostream>
#include "../headers/Caminhao.h"

Caminhao::Caminhao() : Veiculo() {}

Caminhao::Caminhao(string tipoCarro, string placa, int capacidade, int quantidade, string localizacao) : Veiculo(tipoCarro, placa, capacidade, quantidade, localizacao)
{
    setCarro(tipoCarro);
    setPlaca(placa);
    setCapacidade(capacidade);
    setQuantidade(quantidade);
    setLocalizacao(localizacao);
}

Caminhao::~Caminhao() {}

ostream &operator<<(ostream &out, Caminhao *veiculo)
{
    out << "Veiculo: " << veiculo->getCarro() << endl
        << "Placa: " << veiculo->getPlaca() << endl
        << "Capacidade: " << veiculo->getCapacidade() << endl
        << "Quantidade: " << veiculo->getQuantidade() << endl;

    return out;
}
