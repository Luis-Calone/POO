#include <iostream>
#include "../headers/Gerenciador.h"

Gerenciador::Gerenciador()
{
    this->pessoa = NULL;
    this->veiculos = NULL;
    this->demanda = NULL;
}

Gerenciador::Gerenciador(string nome, string cpf, int idade, string produto)
{
    this->pessoa->setNome(nome);
    this->pessoa->setCpf(cpf);
    this->pessoa->setIdade(idade);
    this->demanda->setProduto(produto);
}

Gerenciador::~Gerenciador() {}

int Gerenciador::setVeiculos(Garagem *veiculos)
{
    this->veiculos = veiculos;

    return 1;
}

Veiculo *Gerenciador::entregadorProximo()
{
    this->demanda->setVeiculo(veiculos->maisProx());
    return veiculos->maisProx();
}

Pedido *Gerenciador::getPedido()
{
    return this->demanda;
}