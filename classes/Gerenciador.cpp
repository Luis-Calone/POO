#include <iostream>
#include "../headers/Gerenciador.h"

Gerenciador::Gerenciador()
{
    this->pessoa = NULL;
    this->veiculos = NULL;
    this->demanda = NULL;
}

Gerenciador::Gerenciador(Cliente *pessoa, string nome, string cpf, string endereco, int idade, Pedido *demanda, string produto)
{
    this->pessoa = pessoa;
    this->pessoa->setNome(nome);
    this->pessoa->setCpf(cpf);
    this->pessoa->setEndereco(endereco);
    this->pessoa->setIdade(idade);
    this->demanda = demanda;
    this->demanda->setProduto(produto);
}

Gerenciador::~Gerenciador() {}

int Gerenciador::setVeiculos(Garagem *veiculos)
{
    this->veiculos = veiculos;

    return 1;
}

/*Veiculo *Gerenciador::entregadorProximo()
{
    this->demanda->setVeiculo(veiculos->maisProx());
    return veiculos->maisProx();
}*/

Pedido *Gerenciador::getPedido()
{
    return this->demanda;
}