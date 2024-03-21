#include <iostream>

using namespace std; // DIZENDO AO PROGRAMA QUE VAMOS UTILZAR STDL (BIBLIOTECA PADRÃO DE C++)

class User
{
private: // IMPOSSIVEL ACESSAR FORA DA CLASSE
    int idade;
    string nome;
    string endereco;

public: // POSSIVEL ACESSAR FORA DA CLASSE
    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getNome()
    {
        return this->nome;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }
};

int main(int argc, char *argv[])
{
    // ESTATICAMENTE //
    User usuario;

    usuario.setNome("Luis");
    cout << usuario.getNome() << " ";
    usuario.setIdade(16);
    cout << usuario.getIdade() << "\n";
    // DINAMICAMENTE //

    User *usuario2 = new User; // TCHANÃ, NOVO MALLOC

    usuario2->setIdade(20);
    cout << usuario2->getIdade() << " ";
    usuario2->setNome("Felipe");
    cout << usuario2->getNome() << "\n";

    delete usuario2; // TCHANÃ, NOVO FREE
    return 0;
}