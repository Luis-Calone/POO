#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo
{
private:
    string tipoDeCarro[3] = {"carro", "caminhao", "caminhonete"};
    int carro;
    string tipoDeCarga;
    string placa;
    int capacidade;
    int quantidade;

    string minusculo(string palavra)
    {
        string temp = palavra;
        int tam = temp.size();

        for (int i = 0; i < tam; i++)
            temp[i] = tolower(temp[i]);

        return temp;
    }

public:
    Veiculo();
    Veiculo(int carro, string tipoDeCarga, string placa, int capacidade, int quantidade);
    ~Veiculo();

    int setCarro(int carro);
    string getCarro();

    int setCarga(string tipoDeCarga);
    string getCarga();

    int setPlaca(string placa);
    string getPlaca();

    int setCapacidade(int capacidade);
    int getCapacidade();

    int setQuantidade(int quantidade);
    int getQuantidade();
};

#endif