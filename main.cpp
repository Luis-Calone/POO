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

    int i = 0;
    for (i; i < 5; i++)
    {
        lat = static_cast<float>(rand() % 90);
        lon = static_cast<float>(rand() % 180);
        Caminhao *caminhao = new Caminhao("Caminhao", 10.5, 52.3, placas[i], 500, 0, lat, lon);
        garagem->adicionaVeiculo(caminhao);
    }

    garagem->imprimeVeiculos();

    t = (double)(clock() - tempo) / CLOCKS_PER_SEC;

    cout << endl;
    cout << endl;
    cout << t << endl;

    delete garagem;

    return EXIT_SUCCESS;
}