#include <iostream>
#include <time.h>
#include <list>
#include "headers/Veiculo.h"
#include "headers/Pedidos.h"
#include "headers/Cliente.h"
#include "headers/Caminhao.h"
#include "headers/Garagem.h"

using namespace std;

int main()
{
    srand(time(NULL));

    clock_t tempo = clock();
    double t;

    Caminhao *caminhao = new Caminhao("Caminhao", 10.5, 52.3, "Maconha", "BRA2E19", 500, 0);
    Garagem *garagem = new Garagem();

    cout << "" << caminhao << endl;

    garagem->adicionaVeiculo(caminhao);
    // garagem->imprimeVeiculos();

    t = (double)(clock() - tempo) / CLOCKS_PER_SEC;

    cout << endl;
    cout << endl;
    cout << t << endl;

    delete caminhao;
    delete garagem;

    return EXIT_SUCCESS;
}