#include <iostream>
#include "../headers/Caminhao.h"

Caminhao::Caminhao() : Veiculo() {}

Caminhao::Caminhao(string tipo_carro, string placa, int peso_max, int volume_max, string localizacao) : Veiculo(tipo_carro, placa, peso_max, volume_max, localizacao)
{
    setCarro(tipo_carro);
    setPlaca(placa);
    setPeso_max(peso_max);
    setVolume_max(peso_max);
    setLocalizacao(localizacao);
}

Caminhao::~Caminhao() {}

ostream &operator<<(ostream &out, Caminhao *veiculo)
{
    out << "Veiculo: " << veiculo->getCarro() << endl
        << "Placa: " << veiculo->getPlaca() << endl;

    return out;
}
