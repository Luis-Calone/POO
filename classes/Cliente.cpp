#include <iostream>
#include "Cliente.h"

Cliente::Cliente()
{
    this->nome = "";
    this->cpf = "";
    this->idade = 0;
}

Cliente::Cliente(string nome, string cpf, int idade)
{
    setIdade(idade);
    setCpf(cpf);
    setNome(nome);
}

Cliente::~Cliente() {}

int Cliente::setNome(string nome)
{
    if (nome == "")
        return 0;

    this->nome = nome;
    return 1;
}

int Cliente::setCpf(string cpf)
{
    if (cpf == "")
        return 0;

    this->cpf = cpf;
    return 1;
}

int Cliente::setIdade(int idade)
{
    if (idade <= 0)
        return 0;

    this->idade = idade;
    return 1;
}

int Cliente::getIdade()
{
    if (this->idade <= 0)
        return -1;

    return this->idade;
}

string Cliente::getCpf()
{
    if (this->cpf.empty())
        return "";

    return this->cpf;
}

string Cliente::getNome()
{
    if (this->nome.empty())
        return "";

    return this->nome;
}