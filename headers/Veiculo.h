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

public:
    Veiculo();
    Veiculo(string tipoCarro, string tipoDeCarga, string placa, int capacidade, int quantidade);
    ~Veiculo();

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

    friend ostream &operator<<(ostream &out, Veiculo *veiculo);
};

#endif