// BIBLIOTECAS
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

// ENUMS
enum
{
    MOUSE,
    MOUSEPAD,
    TECLADO,
    MONITOR,
    HEADSET
};

enum
{
    CARRO,
    CAMINHAO,
    CAMINHOTE
};
/**************************/
// CLASS

class Cliente
{
private:
    string nome;
    string cpf;
    int idade;

public:
    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setCpf(string cpf)
    {
        this->cpf = cpf;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }

    string getCpf()
    {
        return this->cpf;
    }

    string getNome()
    {
        return this->nome;
    }
};

class Veiculo
{
private:
    string tipoDeCarro[3] = {"carro", "caminhao", "caminhonete"};
    int carro;
    string tipoDeCarga;
    string placa;
    int capacidade;
    int quantidade;


public:
    void setTipoCarro(int val)
    {
        this->carro = val;
    }

    void setQuantidade(int quantidade)
    {
        this->quantidade = quantidade;
    }

    int getQuantidade()
    {
        return this->quantidade;
    }

    void setTipoCarga(string tipo)
    {
        this->tipoDeCarga = tipo;
    }

    string getTipoCarga()
    {
        return this->tipoDeCarga;
    }

    string getTipoCarro()
    {
        int i = this->carro;

        if (i < 0 || i > 2)
            return "ERRO!";

        return this->tipoDeCarro[i];
    }

    void setPlaca(string placa)
    {
        this->placa = placa;
    }

    string getPlaca()
    {
        return this->placa;
    }

    void setCapacidade(int capacidade)
    {
        this->capacidade = capacidade;
    }

    int getCapacidade()
    {
        return this->capacidade;
    }
};

class Pedido
{
private:
    Cliente *pessoa;
    Veiculo *automovel;
    string produto[5] = {"Mouse", "Mousepad", "Teclado", "Monitor", "Headset"};
    int tempoDeEntrega[4] = {15, 20, 25, 30};
    int produtoIndex;

public:
    Cliente *getCliente()
    {
        return this->pessoa;
    }

    Veiculo *getVeiculo()
    {
        return this->automovel;
    }

    void setCliente(Cliente *pessoa)
    {
        this->pessoa = pessoa;
    }

    void setVeiculo(Veiculo *automovel)
    {
        this->automovel = automovel;
    }

    void setProduto(int produto)
    {
        this->produtoIndex = produto;
    }

    string getProduto()
    {
        int i = this->produtoIndex;

        if (i < 0 || i > 5)
            return "ERRO!";

        return this->produto[i];
    }

    int getEntrega()
    {
        return this->tempoDeEntrega[rand() % 4];
    }
};
/**************************/
// FUNCTIONS

void criaPedido(Pedido *produto, Cliente *pessoa, Veiculo *automovel, int produtoIndex);
void criaVeiculo(Veiculo *automovel, int tipoDeCarro, string placa);
void criaCliente(Cliente *pessoa, string nome, int idade, string cpf);
void imprimeVeiculo(Veiculo *automovel);
void imprimeCliente(Cliente *pessoa);

/**************************/
void criaPedido(Pedido *produto, Cliente *pessoa, Veiculo *automovel, int produtoIndex)
{
    produto->setCliente(pessoa);
    produto->setVeiculo(automovel);
    produto->setProduto(produtoIndex);
}

void criaVeiculo(Veiculo *automovel, int tipoDeCarro, string placa)
{
    automovel->setTipoCarro(tipoDeCarro);

    switch (tipoDeCarro)
    {
    case CARRO:
        automovel->setCapacidade(3500);
        automovel->setTipoCarga("Fragil");
        break;
    case CAMINHAO:
        automovel->setCapacidade(6500);
        automovel->setTipoCarga("Pesado");
        break;
    case CAMINHOTE:
        automovel->setCapacidade(5000);
        automovel->setTipoCarga("Pesado");
        break;
    default:
        break;
    }

    automovel->setPlaca(placa);
}

void criaCliente(Cliente *pessoa, string nome, int idade, string cpf)
{
    pessoa->setCpf(cpf);
    pessoa->setIdade(idade);
    pessoa->setNome(nome);
}

void imprimeVeiculo(Veiculo *automovel)
{
    cout << "INFORMACOES SOBRE O VEICULO: \n"
         << endl;
    cout << automovel->getTipoCarro() << endl;
    cout << automovel->getPlaca() << endl;
    cout << automovel->getCapacidade() << endl;
    cout << automovel->getTipoCarga() << endl;
}

void imprimeCliente(Cliente *pessoa)
{
    cout << "INFORMACOES SOBRE O CLIENTE: \n"
         << endl;
    cout << pessoa->getNome() << "\n";
    cout << pessoa->getIdade() << "\n";
    cout << pessoa->getCpf() << "\n";
}

void imprimePedido(Pedido *produto)
{
    imprimeCliente(produto->getCliente());

    cout << "\nINFORMACOES DE PRODUTO: " << endl;
    cout << produto->getProduto() << endl;
    cout << produto->getEntrega() << " dias uteis para entrega" << endl;

    imprimeVeiculo(produto->getVeiculo());
}

/**************************/
int main(int argc, char *argv[])
{
    srand(time(NULL));

    Pedido *produto = new Pedido;
    Veiculo *automovel = new Veiculo;
    Cliente *pessoa = new Cliente;

    criaVeiculo(automovel, CAMINHAO, "NMR-0604");
    criaCliente(pessoa, "Luis Calone", 20, "05759475964");
    criaPedido(produto, pessoa, automovel, 3);

    imprimePedido(produto);

    delete produto;
    delete pessoa;
    delete automovel;
    return EXIT_SUCCESS;
}