#include <iostream>
#include "classes\Veiculo.h"

using namespace std;

int main()
{
    Veiculo *teste = new Veiculo(0, "Areia", "4D42DD2", 200, 300);

    cout << teste->getCarga() << endl;
    cout << teste->getPlaca() << endl;

    delete teste;

    return EXIT_SUCCESS;
}