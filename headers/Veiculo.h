#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo
{
protected:
    string tipoCarro;
    string placa;
    float peso_max;
    float volume_max;
    string localizacao;

public:
    Veiculo();
    Veiculo(string tipoCarro, string placa, float peso_max, float volume_max, string localizacao);
    virtual ~Veiculo();

    int setCarro(string tipoCarro);
    string getCarro();

    int setPlaca(string placa);
    string getPlaca();

    int setPeso_max(float peso_max);
    float getPeso_max();

    int setVolume_max(float volume_max);
    float getVolume_max();

    int setLocalizacao(string localizacoa);
    string getLocalizacao();

    friend ostream &operator<<(ostream &out, Veiculo *veiculo);
};

#endif