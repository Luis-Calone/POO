#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo
{
protected:
    string tipoCarro;
    string tipoDeCarga;
    string placa;
    int capacidade;
    int quantidade;
    float latitude;
    float longitude;

public:
    Veiculo();
    Veiculo(string tipoCarro, string tipoDeCarga, string placa, int capacidade, int quantidade, float lat, float lon);
    virtual ~Veiculo();

    int setCarro(string tipoCarro);
    string getCarro();

    int setCarga(string tipoDeCarga);
    string getCarga();

    int setPlaca(string placa);
    string getPlaca();

    int setCapacidade(int capacidade);
    int getCapacidade();

    int setQuantidade(int quantidade);
    int getQuantidade();

    void setLatitude(float lat);
    float getLatitude();

    void setLongitude(float lon);
    float getLongitude();

    friend ostream &operator<<(ostream &out, Veiculo *veiculo);
};

#endif