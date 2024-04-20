#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente
{
private:
    string nome;
    string cpf;
    int idade;

public:
    Cliente();
    Cliente(string nome, string cpf, int idade);
    ~Cliente();

    int setNome(string nome);
    int setCpf(string cpf);
    int setIdade(int idade);

    int getIdade();
    string getCpf();
    string getNome();
};


#endif