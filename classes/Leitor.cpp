#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include <random>
#include "../headers/Leitor.h"
/*#include "../headers/Clientela.h"
#include "../headers/Garagem.h"
#include "../headers/Demanda.h"*/

using namespace std;

Leitor::Leitor(){
    this->clientes = nullptr;
    this->veiculos = nullptr;
    this->pedidos = nullptr;
}

Leitor::Leitor(Clientela* clientes, Garagem* veiculos, Demanda* pedidos){
    this->clientes = clientes;
    this->veiculos = veiculos;
    this->pedidos = pedidos;
}

Leitor::~Leitor(){
}

int Leitor::lerArquivo(std::string arquivo, int size){
    std::ifstream* file = new std::ifstream(arquivo);
    std::string aux, linha = "";
    
    if(!file->is_open()){
        free(file);
        return 1;
    } else {
        std::getline(*file, linha);
    }

    cout << linha << endl;

    int i, j;

    std::random_device rd;
    std::mt19937 gen(rd());
    
    std::string locais[] = {"Santa Maria","Caxias do Sul","Porto Alegre","Gravatai","Canoas","Alegrete","Uruguaiana","Curitiba","Joinville","Florianopolis"};
    std::string carro[] = {"Hatch","Seda","SUV","Picape","Crossover","Perua","Minivan","Esportivo","Furgao","Jeep"};
    std::string itens[] = {"Pantufa","Conjunto de adesivos","Quadro a oleo envelhecido","Caixa de musica","Breu","Kit de fabricacao de velas artesanais","Cebola","Grampo fixador de friso","Espelho oval","Pote de ceramica craquelado"};
    std::string placas[] = {"NAB0488","JMZ2958","LMM0036","MUM8594","KBX9865","MZS6052","NAW6965","DDM0211","LWO9388","NAA6275"};

    for(i = 0; i < size; i++){

        Cliente *cliente_new = new Cliente;
        Veiculo *veiculo_new = new Veiculo;
        Pedido *pedido_new = new Pedido;
        
        for(j = 0; j < 7; j++){
            std::getline(*file,aux);

            if(i == 0){
                linha = linha + aux;
            }

            linha = linha + ' ' + aux;
        }
        
        std::istringstream linha2(linha);

        cout << linha << endl;

        int flag = 0;
        aux = "";

        for(j = 0; j < 13; j++){
            getline(linha2,linha,',');

            if(linha.back() == '"' || linha.front() == '"'){
                    flag = 1;
            } else {
                flag = 0;
            }

            if(flag == 1){
                linha = aux + linha;
                aux = linha + ",";
            }

            switch (i){

            case 0:
                cliente_new->setNome(linha);
                cout << linha << endl;
                break;

            case 1:
                cliente_new->setCpf(linha);
                cout << linha << endl;
                break;

            case 3:
                cliente_new->setEndereco(linha);
                cout << linha << endl;
                break;

            case 4:
                cliente_new->setTelefone(linha);
                cout << linha << endl;
                break;

            case 5:
                cliente_new->setEmail(linha);
                cout << linha << endl;
                break;

            case 7:
                pedido_new->setColeta(linha);
                cout << linha << endl;
                break;
            
            case 9:
                pedido_new->setEntrega(linha);
                cout << linha << endl;
                break;
            
            case 10:
                pedido_new->setPeso(std::stof(linha));
                cout << linha << endl;
                break;
            
            case 11:
                pedido_new->setVolume(std::stof(linha));
                cout << linha << endl;
                break;
            
            case 12:
                pedido_new->setPrioridade(linha == "sim");
                cout << linha << endl;
                break;
            
            default:

                break;
            }
        }

        std::uniform_int_distribution<int> dis(0, 9);
        pedido_new->setProduto(itens[dis(gen)]);
        veiculo_new->setCarro(carro[dis(gen)]);
        veiculo_new->setPlaca(placas[dis(gen)]);
        veiculo_new->setLocalizacao(locais[dis(gen)]);
        dis = std::uniform_int_distribution<>(6000, 8000);
        veiculo_new->setPeso_max(dis(gen) * 1.0);
        dis = std::uniform_int_distribution<>(5, 9);
        veiculo_new->setVolume_max(dis(gen) * 1.0);
        dis = std::uniform_int_distribution<>(1, 14);
        pedido_new->setTempo(dis(gen));

        this->clientes->adicionaClientes(cliente_new);
        this->pedidos->adicionaPedidos(pedido_new);
        this->veiculos->adicionaVeiculos(veiculo_new);
    }

    file->close();
    free(file);
}