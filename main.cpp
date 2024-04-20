#include <iostream>
#include <time.h>
#include "headers/Veiculo.h"
#include "headers/Pedidos.h"
#include "headers/Cliente.h"

using namespace std;

int main()
{
    srand(time(NULL));

    clock_t tempo = clock();
    double t;

    Veiculo *automovel = new Veiculo(0, "Areia", "4D42DD2", 200, 300);
    Cliente *pessoa = new Cliente("Luis Calone", "05805805864", 20);
    Pedidos *pedido = new Pedidos(pessoa, automovel, 2, rand() % 10 + 5);

    cout << automovel->getCarro() << endl;
    cout << pessoa->getNome() << endl;
    cout << pedido->getProduto() << endl;

    delete automovel;
    delete pessoa;
    delete pedido;

    t = (double)(clock() - tempo) / CLOCKS_PER_SEC;

    cout << endl;
    cout << endl;
    cout << t << endl;

    return EXIT_SUCCESS;
}