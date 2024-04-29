#include <iostream>
#include <time.h>
#include <list>
#include <cstdlib>
#include "headers/Veiculo.h"
#include "headers/Pedido.h"
#include "headers/Cliente.h"
#include "headers/Caminhao.h"
#include "headers/Garagem.h"
#include "headers/Gerenciador.h"

using namespace std;

int main()
{
    srand(time(NULL));

    clock_t tempo = clock();
    double t;

    string placas[] = {"BRA2E19",
                       "BRA2E29",
                       "BRA2A95",
                       "BRA2E32",
                       "BRA2B91"};

    float lat,
        lon;
    Garagem *garagem = new Garagem();
    Cliente *pessoa = new Cliente();
    Pedido *produto = new Pedido();
    Gerenciador *gerente = new Gerenciador(pessoa, "Luis", "00022255564", "Alegrete", 20, produto, "Caixa de Pitaia");

    int i = 0;
    for (i; i < 5; i++)
    {
        lat = static_cast<float>(rand() % 90);
        lon = static_cast<float>(rand() % 180);
        Caminhao *caminhao = new Caminhao("Caminhao", placas[i], 500, 0, "Uruguaiana");
        garagem->adicionaVeiculo(caminhao);
    }

    garagem->imprimeVeiculos();
    gerente->setVeiculos(garagem);
    /*
    Veiculo *temp = gerente->entregadorProximo();

    cout << "" << temp << endl;
    */
    t = (double)(clock() - tempo) / CLOCKS_PER_SEC;

    cout << endl;
    cout << endl;
    cout << t << endl;

    garagem->~Garagem();

    delete garagem;
    delete pessoa;
    delete produto;
    delete gerente;

    return EXIT_SUCCESS;
}