#include <iostream>
#include <list>
#include <cstdlib>
#include "headers/Veiculo.h"
#include "headers/Pedido.h"
#include "headers/Cliente.h"
#include "headers/Caminhao.h"
#include "headers/Garagem.h"
#include "headers/Gerenciador.h"
#include "headers/Leitor.h"
#include "headers/Demanda.h"
#include "headers/Clientela.h"

using namespace std;

int main()
{
    Garagem *lista_de_veiculos = new Garagem();
    Clientela *lista_de_clientes = new Clientela();
    Demanda *lista_de_pedidos = new Demanda();
    Gerenciador *gerente = new Gerenciador(lista_de_clientes, lista_de_veiculos, lista_de_pedidos);

    Leitor *processador = new Leitor(lista_de_clientes, lista_de_veiculos, lista_de_pedidos);
    processador->lerArquivo("dados_entregas.csv", 1);

    Cliente* teste = lista_de_clientes->getClientes(1);
    cout << *teste << endl;
    

    delete lista_de_clientes;
    delete lista_de_veiculos;
    delete lista_de_pedidos;
    delete gerente;
    delete processador;

    return 0;
}