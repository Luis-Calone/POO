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
    string localizacao;

public:
    Veiculo();
    Veiculo(string tipoCarro, string placa, int capacidade, int quantidade, string localizacao);
    virtual ~Veiculo();

    int setCarro(string tipoCarro);
    string getCarro();

    int setPlaca(string placa);
    string getPlaca();

    int setCapacidade(int capacidade);
    int getCapacidade();

    int setQuantidade(int quantidade);
    int getQuantidade();

    int setLocalizacao(string localizacoa);
    string getLocalizacao();

    friend ostream &operator<<(ostream &out, Veiculo *veiculo);
};

#endif