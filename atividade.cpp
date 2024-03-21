#include <iostream>

using namespace std;

class Veiculo
{
private:
    string tipo;
    string modelo;
    string placa;
    int capacidade;

public:
    void setTipo(string tipo)
    {
        this->tipo = tipo;
    }

    string getTipo()
    {
        return this->tipo;
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

    return 0;
}