#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

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

class Cliente
{
private:
    string nome;
    int cpf;
    int idade;

public:
    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setCpf(int cpf)
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

    int getCpf()
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

    string minusculo(string palavra)
    {
        string temp = palavra;
        int tam = temp.size();

        for (int i = 0; i < tam; i++)
            temp[i] = tolower(temp[i]);

        return temp;
    }

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

    string getTipoCarro(int i)
    {
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
    Cliente pessoa;
    Veiculo automovel;
    string produto[5] = {"Mouse", "Mousepad", "Teclado", "Monitor", "Headset"};
    int tempoDeEntrega[4] = {15, 20, 25, 30};

public:
    void setCliente(Cliente pessoa)
    {
        this->pessoa = pessoa;
    }

    void setVeiculo(Veiculo automovel)
    {
        this->automovel = automovel;
    }

    string getProduto(int i)
    {
        return this->produto[i];
    }

    int getEntrega()
    {
        return this->tempoDeEntrega[rand() % 4];
    }
};

void criaVeiculo(Veiculo automovel, int tipoDeCarro, string placa)
{
    automovel.setTipoCarro(tipoDeCarro);

    switch (tipoDeCarro)
    {
    case CARRO:
        automovel.setCapacidade(3500);
        automovel.setTipoCarga("Fragil");
        break;
    case CAMINHAO:
        automovel.setCapacidade(6500);
        automovel.setTipoCarga("Pesado");
        break;
    case CAMINHOTE:
        automovel.setCapacidade(5000);
        automovel.setTipoCarga("Pesado");
        break;
    default:
        break;
    }

    automovel.setPlaca(placa);
}

int main(int argc, char *argv[])
{

    return 0;
}