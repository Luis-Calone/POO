#include <iostream>
#include <string>

using namespace std;

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
    string tipoDeCarga;
    string modelo;
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

    /*
        void setTipoCarro(string tipo)
        {
                this->tipoDeCarro = tipo;
        }
    */

    string getTipoCarro(string tipo)
    {
        string temp = minusculo(tipo);

        if (temp == this->tipoDeCarro[0])
            return this->tipoDeCarro[0];

        else if (temp == this->tipoDeCarro[1])
            return this->tipoDeCarro[1];

        else if (temp == this->tipoDeCarro[2])
            return this->tipoDeCarro[2];

        else
            return "ERROR!";
    }

    void setModelo(string modelo)
    {
        this->modelo = modelo;
    }

    string getModelo()
    {
        return this->modelo;
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

int main(int argc, char *argv[])
{

    Veiculo automovel;

    automovel.setPlaca("CPD-4042");

    cout << automovel.getPlaca() << "\n";
    cout << automovel.getTipoCarro("CARRO") << "\n";

    return 0;
}