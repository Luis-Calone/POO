#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente
{
private:
    string nome;
    string cpf;
    string endereco;
    string telefone;
    string email;
    int idade;

public:
    Cliente();
    Cliente(string nome, string cpf, string endereco, string telefone, string email, int idade);
    ~Cliente();

    int setNome(string nome);
    int setCpf(string cpf);
    int setEndereco(string endereco);
    int setTelefone(string telefone);
    int setEmail(string email);
    int setIdade(int idade);

    int getIdade();
    string getCpf();
    string getEndereco();
    string getTelefone();
    string getEmail();
    string getNome();
};


#endif