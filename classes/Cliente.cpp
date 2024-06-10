#include <iostream>
#include "../headers/Cliente.h"

Cliente::Cliente()
{
    this->nome = "";
    this->cpf = "";
    this->endereco = "";
    this->telefone = "";
    this->email = "";
    this->idade = 0;
}

Cliente::Cliente(string nome, string cpf, string endereco, string telefone, string email, int idade)
{
    setNome(nome);
    setCpf(cpf);
    setEndereco(endereco);
    setTelefone(telefone);
    setEmail(email);
    setIdade(idade);
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

int Cliente::setEndereco(string endereco)
{
    if (endereco == "")
        return 0;

    this->endereco = endereco;
    return 1;
}

int Cliente::setTelefone(string telefone)
{
    if (telefone == "")
        return 0;

    this->telefone = telefone;
    return 1;
}

int Cliente::setEmail(string email)
{
    if (email == "")
        return 0;

    this->email = email;
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

string Cliente::getEndereco()
{
    if (this->cpf.empty())
        return "";

    return this->cpf;
}

string Cliente::getTelefone()
{
    if (this->telefone.empty())
        return "";

    return this->telefone;
}

string Cliente::getEmail()
{
    if (this->email.empty())
        return "";

    return this->email;
}

string Cliente::getNome()
{
    if (this->nome.empty())
        return "";

    return this->nome;
}

std::ostream& operator<<(std::ostream& os, const Cliente& cliente) { //modelo de saida
    cout 
    << "\n"
    << "Cliente: " << cliente.nome << "\n" 
    << "Idade: " << cliente.idade << "\n" 
    << "Telefone: " << cliente.telefone << "\n"
    << "Email: " << cliente.email << "\n"
    << "CPF: " << cliente.cpf << "\n"
    << "Endereco: " << cliente.endereco << "\n"
    << endl;
}